-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavior' of entity 'counter_ms_high'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     clk           : in     std_logic;
--     dcf_77_s      : in     std_logic;
--     high_ms_count : out    std_logic_vector(7 downto 0);
--     ms_passed     : in     std_logic;
--     reset_n       : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------
  
signal counter : std_logic_vector(3 DOWNTO 0); --Signal interne pour compteur
signal enabled : std_logic;
signal ms_passed:std_logic;
signal high_ms_count_signal:std_logic_vector(7 DOWNTO 0);

architecture behavior of counter_ms_high is
P1:process (clk, reset_n)
begin
	IF (reset_n) = '0' THEN -- reset asynchrone 
		enabled <= '0';
		high_ms_count_signal <= 0x"00";
		counter  <= (OTHERS => '0');
	ELSIF(clk'EVENT and clk = '1') THEN  -- Partie synchrone

	  IF (rising_edge_dcf_77 = '1') THEN
	    enabled <= '1'
	    counter  <= (OTHERS => '0');
	    high_ms_count_signal <= 0x"00";	  

	 
	    ELSIF (ms_passed = '1' AND dcf_77_s = '1') THEN
	      ms_passed <= '0';
	      IF (dcf_77_s = '1') THEN
	        high_ms_count_signal <= STD_LOGIC_VECTOR(UNSIGNED(counter) + 1);
	      END IF; 
	    END IF;
	  END IF;
	END IF;		
end process;
end architecture behavior ; -- of counter_ms_high

