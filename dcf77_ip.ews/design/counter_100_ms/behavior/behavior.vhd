-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavior' of entity 'counter_100_ms'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     clk          : in     std_logic;
--     ms_100_pulse : out    std_logic;
--     ms_pulse     : in     std_logic;
--     reset_n      : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

signal counter : std_logic_vector(6 downto 0); -- Signal pour compteur (doit compter jusqu'à 100 -> 7 bits -> 2^7 = 128)

architecture behavior of counter_100_ms is
P1:process (clk, reset_n)
	begin
	if(reset_n) = '0' then -- reset asynchrone
		ms_100_pulse <= '0';
		counter  <= (OTHERS => '0');
	elsif(clk'EVENT and clk = '1') then
		if ms_pulse = '1' then
			if UNSIGNED(counter) = 99 then -- Pour avoir 100ms, il faut multiplier 1ms par 100 (0 -> 99 = 100)
				counter <= (OTHERS => '0');
				ms_100_pulse <= '1';
			else
				counter <= STD_LOGIC_VECTOR(UNSIGNED(counter) + 1);
				ms_100_pulse <= '0';
			end if;      
		end if;		
	end if;		
end process;
end architecture behavior ; -- of counter_100_ms

