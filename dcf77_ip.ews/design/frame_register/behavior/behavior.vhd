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
--     reg_dmonth  : out    std_logic_vector(6 downto 0);
--     reg_dweek   : out    std_logic_vector(2 downto 0);
--     reg_flags   : out    std_logic_vector(3 downto 0);
--     reg_hours   : out    std_logic_vector(5 downto 0);
--     reg_minutes : out    std_logic_vector(6 downto 0);
--     reg_month   : out    std_logic_vector(5 downto 0);
--     reg_status  : out    std_logic_vector(7 downto 0);
--     reg_year    : out    std_logic_vector(7 downto 0);
--     reset_n     : in     std_logic;
--     start       : in     std_logic;
--     stop        : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture behavior of frame_register is

--Déclarations des registres
signal reg_recbits_l		: std_logic_vector(5 downto 0) 	:="00000";
signal reg_status_l         : std_logic_vector(7 downto 0) 	:=x"00"; 
signal reg_prescaler_l     	: std_logic_vector(15 downto 0)	:=x"0000";
signal reg_flags_l        	: std_logic_vector(3 downto 0) 	:="0000";
signal reg_hours_l        	: std_logic_vector(5 downto 0) 	:="00000";
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
    CASE UNSIGNED(bit_count) IS
			WHEN 16 =>
			   	reg_status_l(2) <= bit_input; --A1
			WHEN 17 =>
				reg_status_l(0) <= bit_input; --Z1
			WHEN 18 =>
				reg_status_l(1) <= bit_input; --Z2
			WHEN 19
				reg_status_l(3) <= bit_input; --A2
			--WHEN 21
			WHEN 21 =>
				reg_minutes_l(0) <= bit_input;
			WHEN 22 =>
				reg_minutes_l(1) <= bit_input;
			WHEN 23 =>
				reg_minutes_l(2) <= bit_input;
			WHEN 24 =>
				reg_minutes_l(3) <= bit_input;
			WHEN 25 =>
				reg_minutes_l(4) <= bit_input;
			WHEN 26 =>
				reg_minutes_l(5) <= bit_input;
			WHEN 27 =>
				reg_minutes_l(6) <= bit_input;
			WHEN 28 =>
				reg_status_l(2) <= bit_input;
			WHEN 29 =>
				reg_hours_l(0) <= bit_input;
			WHEN 30 =>
				reg_hours_l(1) <= bit_input;
			WHEN 31 =>
				reg_hours_l(2) <= bit_input;
			WHEN 32 =>
				reg_hours_l(3) <= bit_input;
			WHEN 33 =>
				reg_hours_l(4) <= bit_input;
			WHEN 34 =>
				reg_hours_l(5) <= bit_input;
			WHEN 35 =>
				reg_status_l(3) <= bit_input;
			WHEN 36 =>
				reg_dmonth_l(0) <= bit_input;
			WHEN 37 =>
				reg_dmonth_l(1) <= bit_input;
			WHEN 38 =>
				reg_dmonth_l(2) <= bit_input;
			WHEN 39 =>
				reg_dmonth_l(3) <= bit_input;
			WHEN 40 =>
				reg_dmonth_l(4) <= bit_input;
			WHEN 41 =>
				reg_dmonth_l(5) <= bit_input;
			WHEN 42 =>
				reg_dweek_l(0)	<= bit_input;
			WHEN 43 =>
				reg_dweek_l(1)	<= bit_input;
			WHEN 44 =>
				reg_dweek_l(2)	<= bit_input;
			WHEN 45 =>
				reg_month_l(0)	<= bit_input;
			WHEN 46 =>
				reg_month_l(1)	<= bit_input;
			WHEN 47 =>
				reg_month_l(2)	<= bit_input;
			WHEN 48 =>
				reg_month_l(3)	<= bit_input;
			WHEN 49
				reg_month_l(4)	<= bit_input;
			WHEN 50
				reg_year_l(0) 	<= bit_input;
			WHEN 51
				reg_year_l(0) 	<= bit_input;
			WHEN 52
				reg_year_l(0) 	<= bit_input;
			WHEN 53
				reg_year_l(0) 	<= bit_input;
			WHEN 54
				reg_year_l(0) 	<= bit_input;
			WHEN 55
				reg_year_l(0) 	<= bit_input;
			WHEN 56
				reg_year_l(0) 	<= bit_input;
			WHEN 57
				reg_year_l(0) 	<= bit_input;
			WHEN 58
				reg_status_l(4) <= bit_input;  --Date
			WHEN 59
			
			
	END CASE;		 

end process;

end architecture behavior ; -- of frame_register

