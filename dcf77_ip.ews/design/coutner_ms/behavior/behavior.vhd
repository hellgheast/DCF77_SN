-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavior' of entity 'coutner_ms'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     clk                : in     std_logic;
--     dcf_77_s           : in     std_logic;
--     freq               : in     std_logic;
--     high_ms_count      : out    std_logic_vector(7 downto 0);
--     reset_n            : in     std_logic;
--     rising_edge_dcf_77 : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------
  
signal counter : std_logic_vector(3 DOWNTO 0); --Signal interne pour compteur

architecture behavior of coutner_ms is
P1:process (clk, reset_n)
	begin
	if(reset_n) = '0' then -- reset asynchrone
		ms_pulse <= '0';
		counter  <= (OTHERS => '0');
	elsif(clk'EVENT and clk = '1') then
		if UNSIGNED(counter) = 9 then -- Pour avoir 1ms, il faut multiplier 0.1ms par 10 (0 -> 9 = 10)
			counter <= (OTHERS => '0');
			ms_pulse <= '1';
		else
			counter <= STD_LOGIC_VECTOR(UNSIGNED(counter) + 1);
			ms_pulse <= '0';
		end if;
	end if;		
end process;
end architecture behavior ; -- of coutner_ms

