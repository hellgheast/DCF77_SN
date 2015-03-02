-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavior' of entity 'reg_mem_dcf77'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     Adress      : in     std_logic_vector(3 downto 0);
--     chip_select : in     std_logic;
--     clk         : in     std_logic;
--     data_in     : in     std_logic_vector(7 downto 0);
--     data_out    : out    std_logic_vector(7 downto 0);
--     prescaler   : out    std_logic_vector(15 downto 0);
--     read        : in     std_logic;
--     reg_dmonth  : in     std_logic_vector(6 downto 0);
--     reg_dweek   : in     std_logic_vector(2 downto 0);
--     reg_flags   : in     std_logic_vector(3 downto 0);
--     reg_hours   : in     std_logic_vector(5 downto 0);
--     reg_minutes : in     std_logic_vector(6 downto 0);
--     reg_month   : in     std_logic_vector(5 downto 0);
--     reg_status  : in     std_logic_vector(7 downto 0);
--     reg_year    : in     std_logic_vector(7 downto 0);
--     reset_n     : in     std_logic;
--     write       : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture behavior of reg_mem_dcf77 is

--Déclarations des constantes
CONSTANT c_rec_bits		: std_logic_vector(3 DOWNTO 0) := "0001"; --Adresse 1
CONSTANT c_status		: std_logic_vector(3 DOWNTO 0) := "0010"; --Adresse 2
CONSTANT c_prescaler_l  : std_logic_vector(3 DOWNTO 0) := "0011"; --Adresse 3
CONSTANT c_prescaler_h	: std_logic_vector(3 DOWNTO 0) := "0100"; --Adresse 4
CONSTANT c_flags		: std_logic_vector(3 DOWNTO 0) := "0101"; --Adresse 5
CONSTANT c_hours		: std_logic_vector(3 DOWNTO 0) := "0110"; --Adresse 6
CONSTANT c_minutes		: std_logic_vector(3 DOWNTO 0) := "0111"; --Adresse 7
CONSTANT c_daymonth		: std_logic_vector(3 DOWNTO 0) := "1000"; --Adresse 8
CONSTANT c_dayweek		: std_logic_vector(3 DOWNTO 0) := "1001"; --Adresse 9
CONSTANT c_month		: std_logic_vector(3 DOWNTO 0) := "1010"; --Adresse A
CONSTANT c_year			: std_logic_vector(3 DOWNTO 0) := "1011";

--Déclarations des registres
signal reg_recbits 		: std_logic_vector(5 downto 0)	:="00000";
signal reg_status  		: std_logic_vector(7 downto 0)	:=x"00"; 
signal reg_prescaler 	: std_logic_vector(15 downto 0)	:=x"0000";
signal reg_flags		: std_logic_vector(3 downto 0)	:="0000";
signal reg_hours		: std_logic_vector(5 downto 0) 	:="00000";
signal reg_minutes		: std_logic_vector(6 downto 0) 	:="0000000";
signal reg_dmonth		: std_logic_vector(5 downto 0)  :="000000";
signal reg_dweek		: std_logic_vector(2 downto 0)  :="000";
signal reg_month		: std_logic_vector(5 downto 0) 	:="000000";
signal reg_year			: std_logic_vector(7 downto 0):=;
        
signal wr_acc : std_logic;
signal rd_acc: std_logic;

begin

-- écriture
P1:PROCESS (clk,reset_n)
BEGIN
  IF(reset_n = '0') THEN
    reg_recbits   	<= (OTHERS => '0');
    reg_status    	<= (OTHERS => '0');
    reg_prescaler 	<= (OTHERS => '0');
    reg_flags 		<= (OTHERS => '0');
    reg_hours 		<= (OTHERS => '0');
    reg_minutes		<= (OTHERS => '0');
    reg_dmonth		<= (OTHERS => '0');
    reg_dweek		<= (OTHERS => '0');
    reg_month		<= (OTHERS => '0');
    reg_year		<= (OTHERS => '0');
  ELSIF (clk'event and clk = '1')THEN
    IF (wr_acc = '1') THEN
      CASE Adress IS
      	WHEN c_prescaler_l => 
      	  	 reg_prescaler(7 downto 0) <= data_in;
      	WHEN c_prescaler_h =>
      		 reg_prescaler(15 downto 8) <= data_in;
      	WHEN OTHERS => null;
    END IF;
  END IF;
END PROCESS;

--Assignation des sorties
prescaler <= reg_prescaler;
   
--lecture  
P2:PROCESS (Adress,)
BEGIN
END PROCESS;

--Signaux combinatoire
wr_acc <= '1' WHEN write = '1' and chip_select = '1' ELSE '0';
rd_acc <= '1' WHEN read = '1' and chip_select = '1' ELSE '0';

--Ecriture registre en combinatoire venant du buffer

end architecture behavior ; -- of reg_mem_dcf77

