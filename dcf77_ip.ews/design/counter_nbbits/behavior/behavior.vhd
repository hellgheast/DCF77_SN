-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavior' of entity 'counter_nbbits'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     bit_count   : out    std_logic_vector(5 downto 0);
--     clk         : in     std_logic;
--     nbbit_pulse : in     std_logic;
--     reset_n     : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------


architecture behavior of counter_nbbits is
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
end architecture behavior ; -- of counter_nbbits

