-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavior' of entity 'frame_register'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     RBG         : in     std_logic_vector(1 downto 0);
--     bit_count   : in     std_logic_vector(5 downto 0);
--     bit_input   : in     std_logic;
--     clk         : in     std_logic;
--     reg_dmonth  : out    std_logic_vector(5 downto 0);
--     reg_dweek   : out    std_logic_vector(2 downto 0);
--     reg_flags   : out    std_logic_vector(3 downto 0);
--     reg_hours   : out    std_logic_vector(5 downto 0);
--     reg_minutes : out    std_logic_vector(6 downto 0);
--     reg_month   : out    std_logic_vector(5 downto 0);
--     reg_recbits : out    std_logic_vector(5 downto 0);
--     reg_status  : out    std_logic_vector(7 downto 0);
--     reg_year    : out    std_logic_vector(7 downto 0);
--     reset_n     : in     std_logic;
--     start       : in     std_logic;
--     stop        : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture behavior of frame_register is

--D�clarations des registres

signal reg_status_l         : std_logic_vector(7 downto 0) 	:=x"00"; 
signal reg_prescaler_l     	: std_logic_vector(15 downto 0)	:=x"0000";
signal reg_flags_l        	: std_logic_vector(3 downto 0) 	:="0000";
signal reg_hours_l        	: std_logic_vector(5 downto 0) 	:="000000";
signal reg_minutes_l        : std_logic_vector(6 downto 0) 	:="0000000";
signal reg_dmonth_l        	: std_logic_vector(5 downto 0)  :="000000";
signal reg_dweek_l        	: std_logic_vector(2 downto 0)  :="000";
signal reg_month_l        	: std_logic_vector(5 downto 0) 	:="000000";
signal reg_year_l           : std_logic_vector(7 downto 0)	:=x"00";

begin
     
process(clk,reset_n)
begin
  IF (reset_n = '0') THEN
  ELSIF(clk'event AND clk = '1') THEN
    CASE unsigned(bit_count) IS 
    
			WHEN "010000" =>    -- 16
			   	reg_status_l(2) <= bit_input; --A1     
			   	
			WHEN "010001" =>
				reg_status_l(0) <= bit_input; --Z1  
				
			WHEN "010010" =>
				reg_status_l(1) <= bit_input; --Z2  				
				
			WHEN "010011" =>                        		
				reg_status_l(3) <= bit_input; --A2    
				
			--WHEN "10100" =>;      -- 20               
			
			WHEN "010101" =>
				reg_minutes_l(0) <= bit_input; 				  
				
			WHEN "010110" =>
				reg_minutes_l(1) <= bit_input;  				
				
			WHEN "010111" =>
				reg_minutes_l(2) <= bit_input;  			 
				
			WHEN "011000" =>
				reg_minutes_l(3) <= bit_input; 
				 			
			WHEN "011001" =>
				reg_minutes_l(4) <= bit_input; 				  
				
			WHEN "011010" =>
				reg_minutes_l(5) <= bit_input;   
								
			WHEN "011011" =>
				reg_minutes_l(6) <= bit_input;  
				
			WHEN "011100" =>
				reg_status_l(2) <= bit_input;  
				
			WHEN "011101" =>
				reg_hours_l(0) <= bit_input; 
				
			WHEN "011110" =>
				reg_hours_l(1) <= bit_input; 
				
			WHEN "011111" =>
				reg_hours_l(2) <= bit_input;  
				
			WHEN "100000" =>
				reg_hours_l(3) <= bit_input; 
				
			WHEN "100001" =>
				reg_hours_l(4) <= bit_input;
				
			WHEN "100010" =>
				reg_hours_l(5) <= bit_input;
				
			WHEN "100011" =>
				reg_status_l(3) <= bit_input;
				
			WHEN "100100" =>
				reg_dmonth_l(0) <= bit_input;
				
			WHEN "100101" =>
				reg_dmonth_l(1) <= bit_input;
				
			WHEN "100110" =>
				reg_dmonth_l(2) <= bit_input;
				
			WHEN "100111" =>
				reg_dmonth_l(3) <= bit_input;
				
			WHEN "101000" =>
				reg_dmonth_l(4) <= bit_input;
				
			WHEN "101001" =>
				reg_dmonth_l(5) <= bit_input;
				
			WHEN "101010" =>
				reg_dweek_l(0)	<= bit_input;
				
			WHEN "101011" =>
				reg_dweek_l(1)	<= bit_input; 
				
			WHEN "101100" =>
				reg_dweek_l(2)	<= bit_input;
				
			WHEN "101101" =>
				reg_month_l(0)	<= bit_input;
				
			WHEN "101110" =>
				reg_month_l(1)	<= bit_input; 
				
			WHEN "101111" =>
				reg_month_l(2)	<= bit_input;
				
			WHEN "110000" =>
				reg_month_l(3)	<= bit_input; 
				
			WHEN "110001" =>
				reg_month_l(4)	<= bit_input;
				
			WHEN "110010" =>
				reg_year_l(0) 	<= bit_input;
				
			WHEN "110011" =>
				reg_year_l(0) 	<= bit_input;
				
			WHEN "110100" =>
				reg_year_l(0) 	<= bit_input;
				
			WHEN "110101" =>
				reg_year_l(0) 	<= bit_input;
				
			WHEN "110110" =>
				reg_year_l(0) 	<= bit_input; 
				
			WHEN "110111" =>
				reg_year_l(0) 	<= bit_input;
				
			WHEN "111000" =>
				reg_year_l(0) 	<= bit_input; 
				
			WHEN "111001" =>
				reg_year_l(0) 	<= bit_input; 
				
			WHEN "111010" =>
				reg_status_l(4) <= bit_input;  --Date
				
			--WHEN "110011" =>;        -- 59
			
			WHEN OTHERS =>
				reg_status_l(1 downto 0) <= RBG;   -- Envoie les informations externes � la trame dans les autres cas.
			
		
		END CASE;  
	END IF;		 

end process;  

reg_recbits <= bit_count;
reg_dmonth  <= reg_dmonth_l;
reg_dweek   <= reg_dweek_l;
reg_flags   <= reg_flags_l;
reg_hours   <= reg_hours_l;
reg_minutes <= reg_minutes_l;
reg_month   <= reg_dmonth_l;
reg_status  <= reg_status_l;
reg_year    <= reg_year_l;




end architecture behavior ; -- of frame_register

