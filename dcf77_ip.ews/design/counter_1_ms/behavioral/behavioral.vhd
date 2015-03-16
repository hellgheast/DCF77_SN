-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavioral' of entity 'counter_1_ms'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     clk                : in     std_logic;
--     dcf_77_s           : in     std_logic;
--     freq               : in     std_logic;
--     ms_passed          : out    std_logic;
--     reset_n            : in     std_logic;
--     rising_edge_dcf_77 : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture behavioral of counter_1_ms is

signal counter : std_logic_vector(3 downto 0); 
signal enabled : std_logic:='0';

begin

P1:process(clk,reset_n)
begin    
	IF (reset_n) = '0' THEN -- reset asynchrone 
		enabled <= '0';
		counter  <= (OTHERS => '0');
	ELSIF(clk'EVENT and clk = '1') THEN  -- Partie synchrone
	
	  IF (rising_edge_dcf_77 = '1') THEN
		enabled <= '1';
		counter <= (OTHERS => '0');
      ELSIF (enabled = '1' AND dcf_77_s = '1') THEN
	    IF (freq = '1') THEN
	      IF UNSIGNED(counter) = 9 then -- Pour avoir 1ms, il faut multiplier 0.1ms par 10 (0 -> 9 = 10)
	        counter <= (OTHERS => '0');
	        ms_passed <= '1';
	      ELSE
	  	    counter <= STD_LOGIC_VECTOR(UNSIGNED(counter) + 1);
	  	    ms_passed <= '0';
	  	  END IF;	
	   ELSIF (dcf_77_s = '0') THEN 
	     enabled <= '0';
	  END IF;
	END IF;

end process;

end architecture behavioral ; -- of counter_1_ms

