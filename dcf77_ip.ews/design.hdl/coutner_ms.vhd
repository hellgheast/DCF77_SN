--------------------------------------------------------------------------------
--
-- This VHDL file was generated by EASE/HDL 8.0 Revision 2 from HDL Works B.V.
--
-- Ease library  : design
-- HDL library   : design
-- Host name     : INF13-MEIERV
-- User name     : vincent.meier
-- Time stamp    : Sat Jun 06 14:32:37 2015
--
-- Designed by   : 
-- Company       : 
-- Project info  : 
--
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
-- Object        : Entity design.coutner_ms
-- Last modified : Mon Apr 13 14:31:37 2015.
--------------------------------------------------------------------------------



library ieee;
use ieee.numeric_std.all;
use ieee.std_logic_1164.all;

entity coutner_ms is
  port (
    clk                : in     std_logic;
    dcf_77_s           : in     std_logic;
    freq               : in     std_logic;
    high_ms_count      : out    std_logic_vector(7 downto 0);
    reset_n            : in     std_logic;
    rising_edge_dcf_77 : in     std_logic);
end entity coutner_ms;

--------------------------------------------------------------------------------
-- Object        : Architecture design.coutner_ms.behavior
-- Last modified : Mon Apr 13 14:31:37 2015.
--------------------------------------------------------------------------------

  
architecture behavior of coutner_ms is

signal counter : std_logic_vector(7 DOWNTO 0); --Signal interne pour compteur

begin 

P1:process (clk, reset_n)           

	begin                  
	
	if(reset_n = '0') then -- reset asynchrone
		counter  <= (OTHERS => '0'); 
		
	elsif(clk'EVENT and clk = '1') then 
	
		if rising_edge_dcf_77 = '1' then
		  	counter  <= (OTHERS => '0');      
		  
	    elsif freq = '1' and dcf_77_s = '1' then
			counter <= STD_LOGIC_VECTOR(UNSIGNED(counter) + 1); 
		
		end if; 
		
	end if;	  
		
end process;    
        
high_ms_count <= counter;

end architecture behavior ; -- of coutner_ms

