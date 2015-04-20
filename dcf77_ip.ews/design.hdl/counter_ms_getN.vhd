--------------------------------------------------------------------------------
--
-- This VHDL file was generated by EASE/HDL 8.0 Revision 2 from HDL Works B.V.
--
-- Ease library  : design
-- HDL library   : design
-- Host name     : INF13-MEIERV
-- User name     : vincent.meier
-- Time stamp    : Mon Apr 20 17:08:55 2015
--
-- Designed by   : 
-- Company       : 
-- Project info  : 
--
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
-- Object        : Entity design.counter_ms_getN
-- Last modified : Mon Apr 20 16:39:03 2015.
--------------------------------------------------------------------------------



library ieee;
use ieee.numeric_std.all;
use ieee.std_logic_1164.all;

entity counter_ms_getN is
  port (
    clk        : in     std_logic;
    freq       : in     std_logic;
    getNothing : out    std_logic;
    reset_n    : in     std_logic;
    stop_temp  : in     std_logic);
end entity counter_ms_getN;

--------------------------------------------------------------------------------
-- Object        : Architecture design.counter_ms_getN.behavior
-- Last modified : Mon Apr 20 16:39:03 2015.
--------------------------------------------------------------------------------

         

architecture behavior of counter_ms_getN is

signal counter : std_logic_vector(9 DOWNTO 0); --Signal interne pour compteur

begin

P1:process (clk, reset_n)           

	begin                  
	
	if(reset_n) = '0' then -- reset asynchrone
		getNothing <= '0';
		counter  <= (OTHERS => '0'); 
		
	elsif(clk'EVENT and clk = '1') then        
	     if stop_temp  = '0' then
	     	getNothing <= '0';  
	     	counter  <= (OTHERS => '0');
	     	      	
	     elsif stop_temp = '1' and freq = '1' then	 
	         	
	     	counter <= STD_LOGIC_VECTOR(UNSIGNED(counter) + 1);   
	       	IF counter >= x"3E9" then
	         	counter  <= (OTHERS => '0');
	         	getNothing <= '1';
	       	END IF;      
	     	
         END IF;   
         	
	end if;	  
		
end process;    

end architecture behavior ; -- of counter_ms_getN

