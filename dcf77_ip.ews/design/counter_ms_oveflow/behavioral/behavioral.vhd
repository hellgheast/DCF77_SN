-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavioral' of entity 'counter_ms_oveflow'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     clk                : in     std_logic;
--     freq               : in     std_logic;
--     reset_n            : in     std_logic;
--     rising_edge_dcf_77 : in     std_logic;
--     sec_overflow       : out    std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

signal counter : std_logic_vector(5 DOWNTO 0); --Signal interne pour compteur, BitCount va jusqu'� 60

architecture behavioral of counter_ms_oveflow is

P1:process (clk, reset_n)
	begin
	if(reset_n) = '0' then -- reset asynchrone
		counter  <= (OTHERS => '0');
	elsif(clk'EVENT and clk = '1') then
		if rising_edge_dcf_77 = '1' then 
			if counter > '999' then        
				sec_overflow = '1';
				counter <= (OTHERS => '0');
			else if freq = '1' then      	-- V�rifier !!!
				sec_overflow = '0';
				counter <= STD_LOGIC_VECTOR(UNSIGNED(counter) + 1);
			end if;      
		end if;		
	end if;		
end process;          

end architecture behavioral ; -- of counter_ms_oveflow
