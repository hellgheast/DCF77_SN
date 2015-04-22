--------------------------------------------------------------------------------
--
-- This VHDL file was generated by EASE/HDL 8.0 Revision 2 from HDL Works B.V.
--
-- Ease library  : design
-- HDL library   : design
-- Host name     : INF13-MEIERV
-- User name     : vincent.meier
-- Time stamp    : Wed Apr 22 12:15:41 2015
--
-- Designed by   : 
-- Company       : 
-- Project info  : 
--
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
-- Object        : Entity design.rising_edge_dectection
-- Last modified : Mon Apr 13 14:31:37 2015.
--------------------------------------------------------------------------------



library ieee;
use ieee.numeric_std.all;
use ieee.std_logic_1164.all;

entity rising_edge_dectection is
  port (
    clk                : in     std_logic;
    dcf_77_s           : in     std_logic;
    reset_n            : in     std_logic;
    rising_edge_dcf_77 : out    std_logic);
end entity rising_edge_dectection;

--------------------------------------------------------------------------------
-- Object        : Architecture design.rising_edge_dectection.behavioral
-- Last modified : Mon Apr 13 14:31:37 2015.
--------------------------------------------------------------------------------


architecture behavioral of rising_edge_dectection is
    
signal sync1 : std_logic := '0';

begin       

P1:process(clk, reset_n) is
	begin
	if reset_n = '0' then
		--rising_edge_dcf_77 <= '0';
	elsif (clk = '1' and clk'event) then
	     sync1 <= dcf_77_s;
	end if;
end process;

rising_edge_dcf_77 <= '1' when (dcf_77_s = '1' and sync1 = '0') else '0';
 
end architecture behavioral ; -- of rising_edge_dectection

