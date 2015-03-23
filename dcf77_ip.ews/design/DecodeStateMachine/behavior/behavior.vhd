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
--     nbbit_pulse   : out    std_logic;
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
  constant c_STOP    		: t_state := "10";
  constant c_STATE_DECODE	: t_state := "11";
  
-- Declare signals  
  signal StateMachine : t_state;
    
begin
       
P1:process (clk, reset_n)
	begin
	if(reset_n) = '0' then -- reset asynchrone   
		state 		<= c_DCF_DETECT;
		start 		<= '0';
		stop  		<= '0';
		state_bit 	<= '0';
		nbbit_pulse <= '0';  
	
   	elsif(clk'EVENT and clk = '1') then 
   	
   		case state is 
   			
   			when c_DCF_DETECT =>  -- Détection d'un '0' de la trame DCF77  
   			     
   			    nbbit_pulse <= '0';
   			    
   			    if stop = '1' and dcf_77_s = '0' then 
   			    	state <= c_DCF_DETECT; 
   			    	
   			    else    
   			    	stop  <= '0';
   			    	if dcf_77_s = '1' then
   						state <= c_DCF_DETECT; 	
   					else if dcf_77_s = '0' then
   						state <= c_BIT_DECODE;    	
   					end if; 
   					           
   				end if;
   				
   			when c_BIT_DECODE =>  -- Décodage du numéro de bit (59e ou autre)
   			
   				if sec_overflow = '1' then   -- 59e bit -> stop
   					state <= c_STOP;  	
  				else
   					state <= c_STATE_DECODE; 
   				end if;
   			
   			when c_STOP => -- Stop
   					
   				stop  <= '1';  
   				nbbit_pulse <= '1'; -- Bitcount ++ 
   				state <= c_DCF_DETECT;			
   											
   			when c_STATE_DECODE =>      -- Décodage de l'état du bit actuel de la trame
   			
   				if high_ms_count = 99 then
   					state_bit = '1';
   					state <= c_DCF_DETECT;		
   				else if high_ms_count = 199 then  
   					state_bit = '0';
   					state <= c_DCF_DETECT;   		
   				else   
   					state <= c_STATE_DECODE;
   				
   			when others =>
   			    state <= c_DCF_DETECT;     
   			    
		end case;    
	
	end if;
	
end process;
		
	
end architecture behavior ; -- of DecodeStateMachine
                     



