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
-- Object        : Entity design.decode_RBG
-- Last modified : Thu Apr 23 20:01:46 2015.
--------------------------------------------------------------------------------



library ieee;
use ieee.numeric_std.all;
use ieee.std_logic_1164.all;

entity decode_RBG is
  port (
    RBG        : out    std_logic_vector(1 downto 0);
    bit_count  : in     std_logic_vector(5 downto 0);
    clk        : in     std_logic;
    getNothing : in     std_logic;
    reset_n    : in     std_logic;
    start      : in     std_logic;
    stop       : in     std_logic);
end entity decode_RBG;

--------------------------------------------------------------------------------
-- Object        : Architecture design.decode_RBG.behavior
-- Last modified : Thu Apr 23 20:01:46 2015.
--------------------------------------------------------------------------------


architecture behavior of decode_RBG is
       
--signal getNot    : std_logic := '0';
--signal busyTemp  : std_logic := '0';
--signal readyTemp : std_logic := '0';

signal state_bits : std_logic_vector(1 downto 0);

begin     

P1 : process(clk,reset_n) IS
begin
	if reset_n = '0' then
 		state_bits <= (others => '0');
 		--getNot <= '0';
 		--busyTemp <= '0';
 		--readyTemp <= '0'; 
 		 		
	elsif(clk'EVENT and clk = '1')then 
		if start = '0' then 
			if getNothing = '1' then
				state_bits <= "00"; -- GetNothing
				--readyTemp <= '0';
				--busyTemp <= '0';
				--getNot <= '1';
				
			elsif stop = '1' then 
				--busyTemp <= '0';
				if bit_count >= "111011" then
					state_bits <= "10"; -- Ready
  	   				--readyTemp <= '1'; 
  	   			else
  	   				state_bits <= "11"; -- Etat "indéterminé"	   			   
  	   				--readyTemp <= '0';
  	   			end if;   
  	   			
  	   		end if;
  	   		 	
		else
			state_bits <= "01"; -- Busy
			--getNot <= '0';
  	   	 	--busyTemp <= '1';
  	   		--readyTemp <= '0';
  	   	
  	   	end if;
		       
	end if;
	
end process;

RBG <= state_bits;

	   --"00" when getNot = '1' and busyTemp = '0' and readyTemp = '0'	else
	   --"01" when busyTemp = '1'	and getNot = '0' and readyTemp = '0' 	else 
	   --"10" when readyTemp = '1' and busyTemp = '0' and getNot = '0' 	else 
	   --"11";



end architecture behavior ; -- of decode_RBG

