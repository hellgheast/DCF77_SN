-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavior' of entity 'counter_sec'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     clk     : in     std_logic;
--     freq    : in     std_logic;
--     reset_n : in     std_logic;
--     s_pulse : out    std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------
signal counter : std_logic_vector(13 DOWNTO 0); -- Signal interne pour compteur (jusqu'à 9'999 -> 14 bits -> 2^14 = 16'384)

architecture behavior of counter_sec is
P1:process (clk, reset_n)
	begin
	if(reset_n) = '0' then -- reset asynchrone
		s_pulse <= '0';
		counter  <= (OTHERS => '0');
	elsif(clk'EVENT and clk = '1') then
		if UNSIGNED(counter) = 9999 then -- Pour avoir 1s, il faut multiplier 0.1ms par 10'000 (0 -> 9'999 = 10'000)
			counter <= (OTHERS => '0');
			s_pulse <= '1';
		else
			counter <= STD_LOGIC_VECTOR(UNSIGNED(counter) + 1);
			s_pulse <= '0';
		end if;
	end if;		
end process;
end architecture behavior ; -- of counter_sec

