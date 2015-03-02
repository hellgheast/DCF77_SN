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
--     reset_n     : in     std_logic;
--     start       : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------


architecture behavior of counter_nbbits is

P1:process (clk, reset_n)
	begin
	if(reset_n) = '0' then -- reset asynchrone
		counter  <= (OTHERS => '0');
	elsif(clk'EVENT and clk = '1') then
		if ms_pulse = '1' then
			if start = '1' then 
				counter <= (OTHERS => '0');
			else
				counter <= STD_LOGIC_VECTOR(UNSIGNED(counter) + 1);
			end if;      
		end if;		
	end if;		
end process;         

bit_count <= counter;

end architecture behavior ; -- of counter_nbbits

