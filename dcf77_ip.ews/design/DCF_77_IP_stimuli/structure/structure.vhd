-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'structure' of entity 'DCF_77_IP_stimuli'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     Adress      : out    std_logic_vector(3 downto 0);
--     chip_select : out    std_logic;
--     clk         : out    std_logic;
--     data_in     : out    std_logic_vector(7 downto 0);
--     data_out    : in     std_logic_vector(7 downto 0);
--     dcf_77_in   : out    std_logic;
--     read        : out    std_logic;
--     reset_n     : out    std_logic;
--     signal_int  : in     std_logic;
--     start_acq   : in     std_logic;
--     write       : out    std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------



architecture structure of DCF_77_IP_stimuli is

--signaux propres au testbench
SIGNAL sim_end      : BOOLEAN   := FALSE;
SIGNAL mark_error   : std_logic := '0';
SIGNAL error_number : INTEGER   :=  0;
SIGNAL clk_gen      : std_logic := '0';

BEGIN
--********** PROCESS "clk_gengen" **********
clk_gengen: PROCESS
  BEGIN
  IF sim_end = FALSE THEN
    clk_gen <= '1', '0' AFTER 1 ns;
    clk     <= '1', '0' AFTER 5 ns, '1' AFTER 17 ns; --commenter si  on teste une fonction combinatoire (pas de clock)
    wait for 25 ns;
  ELSE
    wait;
  END IF;
END PROCESS;

--********** PROCESS "run" **********
run: PROCESS

  PROCEDURE sim_cycle(num : IN integer) IS
  BEGIN
    FOR index IN 1 TO num LOOP
      wait until clk_gen'EVENT AND clk_gen = '1';
    END LOOP;
  END sim_cycle;

  --********** PROCEDURE "init" **********
  --fixer toutes les entrees du module à tester (DUT)
  PROCEDURE init IS
  BEGIN        
  
   	reset_n		<= '0';
   	chip_select	<= '1'; 
 	read 		<= '0';
	write 		<= '0';    

  END init;

  --********** PROCEDURE "test_signal" **********
  PROCEDURE test_signal(signal_test, value: IN std_logic; erreur : IN integer) IS 
	BEGIN
	   IF signal_test/= value THEN
         	mark_error <= '1', '0' AFTER 1 ns;
         	error_number <= erreur;
         	ASSERT FALSE REPORT "Etat du signal non correct" SEVERITY WARNING;
	   END IF;
  END test_signal;

 --********** PROCEDURE "test_vecteur" **********
  PROCEDURE test_vecteur(signal_test, value: IN std_logic_vector(7 DOWNTO 0); erreur : IN integer) IS 
	BEGIN
	   IF signal_test/= value THEN
         	mark_error <= '1', '0' AFTER 1 ns;
         	error_number <= erreur;
         	ASSERT FALSE REPORT "Etat du signal non correct" SEVERITY WARNING;
	   END IF;
  END test_vecteur;         
  
  --********** PROCEDURE "DCF_bit" **********
  PROCEDURE DCF_bit(state_bit: IN std_logic) IS 
	BEGIN
	   IF state_bit = '0' THEN
         	DCF_77_in <= '1', '0' AFTER 200 ms;
         	wait for 800 ms;
        	 
       ELSIF state_bit = '1' THEN
            DCF_77_in <= '1', '0' AFTER 100 ms;
      	    wait for 900 ms;
      	    
	   END IF;
  END DCF_bit;  
  
    --********** PROCEDURE "DCF_bit" **********
  PROCEDURE DCF_end IS 
	BEGIN
        DCF_77_in <= '0';
      	wait for 1000 ms;
   	
  END DCF_end;


BEGIN --debut de la simulation temps t=0ns

	init;  --appel procdure init
	ASSERT FALSE REPORT "la simulation est en cour" SEVERITY NOTE;

	--debut des tests
	 sim_cycle(2); 
 
-- PRESCALER -----------------------------------------
	 
	 write <= '1'; 
	 
	 Adress <= x"03"; -- Low Address of Prescaler  
	 sim_cycle(1); 
	 
	 data_in <= "10000000"; -- Low Value of Prescaler 
	 sim_cycle(1);	  	  	  	  
	 
	 Adress <= x"04"; -- High Address of Prescaler 
	 sim_cycle(1);
	 
	 data_in <= "00110000"; -- High Value of Prescaler 
	 sim_cycle(1);
     
     write <= '0';                                                

-- DCF FRAME ----------------------------------------- 

	 -- bits 0-14 (témoins d'alertes civiles)
	 DCF_bit('0');  -- bit 0
	 DCF_bit('0');
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('0');
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('0');
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('0');
	 DCF_bit('1');
	  
	 -- bits 15-19 (divers)
	 DCF_bit('1'); -- bit d'appel 
	 DCF_bit('1'); -- annonce un basculement été/hiver (A1)	 
	 DCF_bit('0'); -- bit de décalage horaire (Z1)
	 DCF_bit('1'); -- bit de décalage horaire (Z2)  
	 DCF_bit('1'); -- annonce l'ajout de sec. intercalaire (A2)
	 
	 -- bit de début du codage du temps
	 DCF_bit('1'); -- bit 20 toujours à 1
	       
	 -- bits 21-28 (minutes)
	 DCF_bit('1'); 
	 DCF_bit('0');
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('0');
	 DCF_bit('1');
	 DCF_bit('1'); -- Parité 
	              
	 -- bits 29-35 (heures)
	 DCF_bit('1');
	 DCF_bit('0');
	 DCF_bit('1'); 
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('0');
	 DCF_bit('1'); -- Parité
	 
	 -- bits 36-41 (jour du mois)
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('0');
	 DCF_bit('1');
	 DCF_bit('1'); 
	 DCF_bit('1');
	 
	 -- bits 42-44 (jour de la semaine) : 1 = Lundi, 7 = Dimanche
	 DCF_bit('0');
	 DCF_bit('1');
	 DCF_bit('1'); 
	 
	 -- bits 45-49 (No du mois)
	 DCF_bit('1');
	 DCF_bit('0');
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('1');
	 
	 -- bits 50-57 (année dans le siècle)
	 DCF_bit('0');
	 DCF_bit('1'); 
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('0');
	 DCF_bit('1');
	 DCF_bit('1');
	 DCF_bit('1'); 
	 DCF_bit('0'); -- Parité
    
	 DCF_end; 	   -- bit de fin de trame, aucune modulation
	                                                         
	 
 -- END FRAME TEST -----------------------------------------  
    
 	sim_cycle(1);    
 	test_signal(signal_int,'1', 1 ); -- Error 1 : End of frame is not detected  
 
 -- READ DATAS ---------------------------------------------
	 
	 read <= '1'; 
	 
	 Adress <= x"06"; -- Address of Minutes  
	 sim_cycle(1); 
	 
	 test_vecteur(data_out, "10110000", 2); -- Value of Minutes 
	 sim_cycle(1);	  	  	  	  
	 
	 Adress <= x"07"; -- Address of Hours 
	 sim_cycle(1);
	 
	 test_vecteur(data_out, "10110000", 3); -- Value of Hours 
	 sim_cycle(1); 
	 
	 Adress <= x"08"; -- Address of D of Month  
	 sim_cycle(1); 
	 
	 test_vecteur(data_out, "10110000", 4); -- Value of D of Month  
	 sim_cycle(1);	  	  	  	  
	 
	 Adress <= x"09"; -- Address of D of Week 
	 sim_cycle(1);
	 
	 test_vecteur(data_out, "10110000", 5); -- Value of D of Week
	 sim_cycle(1);
     
     Adress <= x"0A"; -- Address of Month of Year 
	 sim_cycle(1);
	 
	 test_vecteur(data_out, "10110000", 6); -- Value of Month of Year 
	 sim_cycle(1);
     
     Adress <= x"0B"; -- Address of Year 
	 sim_cycle(1);
	 
	 sim_cycle(1);
     
     
     read <= '0';                     	
 	
 	 
	 	

	sim_end <= TRUE;
	wait;

END PROCESS;

end architecture structure ; -- of DCF_77_IP_stimuli


