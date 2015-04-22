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
-- Object        : Entity design.DCF_77_IP_tb
-- Last modified : Fri Apr 10 11:16:10 2015.
--------------------------------------------------------------------------------



library ieee;
use ieee.numeric_std.all;
use ieee.std_logic_1164.all;

entity DCF_77_IP_tb is
end entity DCF_77_IP_tb;

--------------------------------------------------------------------------------
-- Object        : Architecture design.DCF_77_IP_tb.behaviour
-- Last modified : Fri Apr 10 11:16:10 2015.
--------------------------------------------------------------------------------

architecture behaviour of DCF_77_IP_tb is

  signal read        : std_logic;
  signal write       : std_logic;
  signal chip_select : std_logic;
  signal data_in     : std_logic_vector(7 downto 0);
  signal Adress      : std_logic_vector(3 downto 0);
  signal clk         : std_logic;
  signal reset_n     : std_logic;
  signal dcf_77_in   : std_logic;
  signal start_acq   : std_logic;
  signal signal_int  : std_logic;
  signal data_out    : std_logic_vector(7 downto 0);

  component DCF_77_IP
    port (
      Adress      : in     std_logic_vector(3 downto 0);
      chip_select : in     std_logic;
      clk         : in     std_logic;
      data_in     : in     std_logic_vector(7 downto 0);
      data_out    : out    std_logic_vector(7 downto 0);
      dcf_77_in   : in     std_logic;
      read        : in     std_logic;
      reset_n     : in     std_logic;
      signal_int  : out    std_logic;
      start_acq   : out    std_logic;
      write       : in     std_logic);
  end component DCF_77_IP;

  component DCF_77_IP_stimuli
    port (
      Adress      : out    std_logic_vector(3 downto 0);
      chip_select : out    std_logic;
      clk         : out    std_logic;
      data_in     : out    std_logic_vector(7 downto 0);
      data_out    : in     std_logic_vector(7 downto 0);
      dcf_77_in   : out    std_logic;
      read        : out    std_logic;
      reset_n     : out    std_logic;
      signal_int  : in     std_logic;
      start_acq   : in     std_logic;
      write       : out    std_logic);
  end component DCF_77_IP_stimuli;

begin

  dut: DCF_77_IP
    port map(
      Adress      => Adress,
      chip_select => chip_select,
      clk         => clk,
      data_in     => data_in,
      data_out    => data_out,
      dcf_77_in   => dcf_77_in,
      read        => read,
      reset_n     => reset_n,
      signal_int  => signal_int,
      start_acq   => start_acq,
      write       => write);

  stimuli: DCF_77_IP_stimuli
    port map(
      Adress      => Adress,
      chip_select => chip_select,
      clk         => clk,
      data_in     => data_in,
      data_out    => data_out,
      dcf_77_in   => dcf_77_in,
      read        => read,
      reset_n     => reset_n,
      signal_int  => signal_int,
      start_acq   => start_acq,
      write       => write);
end architecture behaviour ; -- of DCF_77_IP_tb

