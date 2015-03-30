-- EASE/HDL begin --------------------------------------------------------------
-- 
-- Architecture 'behavior' of entity 'decode_RBG'.
-- 
--------------------------------------------------------------------------------
-- 
-- Copy of the interface declaration:
-- 
--   port (
--     RBG       : out    std_logic_vector(2 downto 0);
--     bit_count : in     std_logic_vector(5 downto 0);
--     clk       : in     std_logic;
--     reset_n   : in     std_logic;
--     start     : in     std_logic;
--     stop      : in     std_logic);
-- 
-- EASE/HDL end ----------------------------------------------------------------

architecture behavior of decode_RBG is
       
signal fisrtCountTemp : std_logic_vector(5 downto 0); 
signal secondCountTemp: std_logic_vector(1 downto 0);
signal busyTemp  : std_logic;
signal readyTemp : std_logic;

begin     

P1 : process(clk,reset_n) IS
begin
	if reset_n = '0' then
 		RBG => (others <= '0');
 		busyTemp <= '0';
 		readyTemp <= '0';
 		countTemp <= '0';
 		
	elsif  (clk = '1' AND clk'event) THEN  
		 
		countTemp <= bit_count;
		
		-- BUSY      
		if stop = '1' then
			busyTemp <= '0'; 
  	   	elsif start = '1' then   
  	   		busyTemp <= '1';
  	   	end if;
  	   	
  	   	-- READY
  	   	if stop = '1' and bit_count >= 59 then
  	   		readyTemp <= '1';
  	   	else
  	   		readyTemp <= '0';
  	   	end if;
  	   	
  	   	-- GETNOTHING
  	   	if bit_count = fisrtCountTemp then
  	   		secondCountTemp++;
  	   	 
  	   		
  	   		       
	end if;
end process;

end architecture behavior ; -- of decode_RBG

