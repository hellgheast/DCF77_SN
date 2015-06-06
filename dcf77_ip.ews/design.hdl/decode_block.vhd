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
-- Object        : Entity design.decode_block
-- Last modified : Mon Mar 30 14:38:55 2015.
--------------------------------------------------------------------------------



library ieee;
use ieee.numeric_std.all;
use ieee.std_logic_1164.all;

entity decode_block is
  port (
    bit_count          : out    std_logic_vector(5 downto 0);
    clk                : in     std_logic;
    dcf_77_s           : in     std_logic;
    freq               : in     std_logic;
    getNothing         : out    std_logic;
    high_ms_count      : in     std_logic_vector(7 downto 0);
    reset_n            : in     std_logic;
    rising_edge_dcf_77 : in     std_logic;
    sec_overflow       : in     std_logic;
    start              : out    std_logic;
    state_bit          : out    std_logic;
    stop               : out    std_logic);
end entity decode_block;

--------------------------------------------------------------------------------
-- Object        : Architecture design.decode_block.structure
-- Last modified : Mon Mar 30 14:38:55 2015.
--------------------------------------------------------------------------------

architecture structure of decode_block is

  signal start_net : std_logic;
  signal stop_net  : std_logic;
  signal stop_temp : std_logic;

  component counter_nbbits
    port (
      bit_count          : out    std_logic_vector(5 downto 0);
      clk                : in     std_logic;
      reset_n            : in     std_logic;
      rising_edge_dcf_77 : in     std_logic;
      start              : in     std_logic;
      stop               : in     std_logic);
  end component counter_nbbits;

  component DecodeStateMachine
    port (
      clk           : in     std_logic;
      dcf_77_s      : in     std_logic;
      high_ms_count : in     std_logic_vector(7 downto 0);
      reset_n       : in     std_logic;
      sec_overflow  : in     std_logic;
      start         : out    std_logic;
      state_bit     : out    std_logic;
      stop          : out    std_logic;
      stop_temp     : out    std_logic);
  end component DecodeStateMachine;

  component counter_ms_getN
    port (
      clk        : in     std_logic;
      freq       : in     std_logic;
      getNothing : out    std_logic;
      reset_n    : in     std_logic;
      stop_temp  : in     std_logic);
  end component counter_ms_getN;

begin
  start <= start_net;
  stop <= stop_net;

  u1: counter_nbbits
    port map(
      bit_count          => bit_count,
      clk                => clk,
      reset_n            => reset_n,
      rising_edge_dcf_77 => rising_edge_dcf_77,
      start              => start_net,
      stop               => stop_net);

  u2: DecodeStateMachine
    port map(
      clk           => clk,
      dcf_77_s      => dcf_77_s,
      high_ms_count => high_ms_count,
      reset_n       => reset_n,
      sec_overflow  => sec_overflow,
      start         => start_net,
      state_bit     => state_bit,
      stop          => stop_net,
      stop_temp     => stop_temp);

  u3: counter_ms_getN
    port map(
      clk        => clk,
      freq       => freq,
      getNothing => getNothing,
      reset_n    => reset_n,
      stop_temp  => stop_temp);
end architecture structure ; -- of decode_block

