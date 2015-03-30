-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavior' of entity 'DecodeStateMachine'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     clk           : in     std_logic;
--     dcf_77_s      : in     std_logic;
--     high_ms_count : in     std_logic_vector(7 downto 0);
--     reset_n       : in     std_logic;
--     sec_overflow  : in     std_logic;
--     start         : out    std_logic;
--     state_bit     : out    std_logic;
--     stop          : out    std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------
  
architecture behavior of DecodeStateMachine is
     
-- Declare type, subtype

  subtype t_state is std_logic_vector(1 DOWNTO 0);
        
-- Declare constants

  constant c_DCF_DETECT		: t_state := "00";
  constant c_BIT_DECODE		: t_state := "01";
  constant c_STATE_DECODE	: t_state := "10";
  
-- Declare signals  
  signal state 		  : t_state;
  signal stop_temp 	  : std_logic; 
  
begin
       
P1:process (clk, reset_n)
	begin
	if(reset_n) = '0' then -- reset asynchrone   
		state 		<= c_DCF_DETECT;
		start 		<= '0';
		stop  		<= '0';
		state_bit 	<= '0';
		
	
   	elsif(clk'EVENT and clk = '1') then 
   	
   		case state is 
   			
   			when c_DCF_DETECT =>  -- Détection d'un '0' de la trame DCF77  
   			     
   			    stop <= '0';
   			    
   			    if stop_temp = '1' and dcf_77_s = '0' then 
   			    	state <= c_DCF_DETECT; 
   			    	
   			    else  
   			    	if stop_temp = '1' then
   			    		start <= '1';
   			    		stop_temp  <= '0';
   			    	end if;
   			    	
   			    	if dcf_77_s = '1' then
   						state <= c_DCF_DETECT; 	
   					elsif dcf_77_s = '0' then
   						state <= c_BIT_DECODE;    	
   					end if; 
   					           
   				end if;
   				
   			when c_BIT_DECODE =>  -- Décodage du numéro de bit (59e ou autre)
   			    
   		   		start <= '0'; -- Start passe à '0', ce qui en fait une pulse.
   		   		
   				if sec_overflow = '1' then   -- 59e bit -> stop
   					stop_temp  <= '1';  
   					stop  <= '1';  
   					state <= c_DCF_DETECT;  	
  				else
   					state <= c_STATE_DECODE; 
   				end if;		
   											
   			when c_STATE_DECODE => -- Décodage de l'état du bit actuel de la trame
   			
   				if high_ms_count = x"63" then
   					state_bit <= '1';
   					state <= c_DCF_DETECT;		
   				elsif high_ms_count = x"C7" then  
   					state_bit <= '0';
   					state <= c_DCF_DETECT;   		
   				else   
   					state <= c_STATE_DECODE;
   				 end if;
   			when others =>
   			    state <= c_DCF_DETECT;     
   			    
		end case;    
	
	end if;
	
end process;
		
	
end architecture behavior ; -- of DecodeStateMachine
                     



