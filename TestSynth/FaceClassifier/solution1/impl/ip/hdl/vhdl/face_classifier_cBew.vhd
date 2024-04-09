-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.2
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity face_classifier_cBew_rom is 
    generic(
             DWIDTH     : integer := 32; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 100
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of face_classifier_cBew_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "01000000001011011001111100001011", 
    1 => "10111111110101010110101110000101", 
    2 => "10111111110110111100000101011011", 
    3 => "10111111000100111101110011111011", 
    4 => "11000000011010010000010010001000", 
    5 => "10111100101101000000100111001010", 
    6 => "01000000010100100101110010011001", 
    7 => "00111111010010101000100000010001", 
    8 => "00111111101011010101001100101010", 
    9 => "00111111101000000110110010110110", 
    10 => "11000000000001101101011010010100", 
    11 => "01000000100000100110001110010101", 
    12 => "01000000000000110011001010001000", 
    13 => "01000000011100010001000100111101", 
    14 => "00111111100110011110100111111001", 
    15 => "00111110110011000101010111010111", 
    16 => "10111100100101001010101110001110", 
    17 => "11000000001000111101110111110000", 
    18 => "01000000010011010000110001010110", 
    19 => "11000000000100001101000101110011", 
    20 => "11000000100011100100100010010001", 
    21 => "00111110100010000100000010001111", 
    22 => "00111110110101001111011000010101", 
    23 => "01000000111111000000100100001111", 
    24 => "00111111110010101101001100100110", 
    25 => "01000000001000101011010000101000", 
    26 => "11000000001000101111000001111110", 
    27 => "00111111111011000101000100001110", 
    28 => "10111111100000001100101110101010", 
    29 => "00111111010101001110011111001110", 
    30 => "11000000011000011000010100001011", 
    31 => "00111111100000010000101111100110", 
    32 => "01000000001111101011101111001000", 
    33 => "10111111100111110101111000101000", 
    34 => "00111111101001000010000011001000", 
    35 => "11000000001011000111010111110001", 
    36 => "10111111101000110110111001101010", 
    37 => "10111111111100111000011111101010", 
    38 => "11000000110010111100111110111011", 
    39 => "11000000101101101101010110110101", 
    40 => "11000000011011010101011100000011", 
    41 => "01000000001001010011011000111100", 
    42 => "10111111011110110010111101110111", 
    43 => "00111110101010011001110011100011", 
    44 => "01000000000000010101101000011111", 
    45 => "00111111000000100111101000101010", 
    46 => "01000000000101111010111110011011", 
    47 => "00111011111110110111111100001111", 
    48 => "01000000001111110011111001111010", 
    49 => "01000000000010001101011101110111", 
    50 => "01000000010001001111010011110111", 
    51 => "10111111010111110000101100111010", 
    52 => "10111110000011110001101111001001", 
    53 => "10111110100100010100101000101110", 
    54 => "01000000000110010011011110010111", 
    55 => "10111110101011001101010110011010", 
    56 => "00111111100101111111000100011010", 
    57 => "00111111100110101100110001111110", 
    58 => "01000000000001110001011001011100", 
    59 => "10111110100001101010011110011010", 
    60 => "01000000010100110000100010000010", 
    61 => "00111111100010000010101101001100", 
    62 => "01000000010010101100011010000101", 
    63 => "10111111001110111001001111001011", 
    64 => "11000000000000011110011101010110", 
    65 => "11000000000001011001010000111100", 
    66 => "11000000010001111110010101101111", 
    67 => "10111111100000011111110110101101", 
    68 => "00111111101001100101000001000100", 
    69 => "01000000001010000111101011110101", 
    70 => "00111111001011011110001000110111", 
    71 => "10111111111010011011000110010001", 
    72 => "11000000010000100101111110010110", 
    73 => "01000000010100001101100101001110", 
    74 => "11000000000001001101000100000111", 
    75 => "10111111111011101101111011110101", 
    76 => "01000000010010010001001110011100", 
    77 => "10111111111101010001010010001011", 
    78 => "00111111100010001110010110111101", 
    79 => "10111101110000010001010100010011", 
    80 => "10111110011111101101110011001100", 
    81 => "01000000000110010111101101100110", 
    82 => "10111110111000110101111110101111", 
    83 => "01000000001011100111111111011010", 
    84 => "10111100101111101101111101000001", 
    85 => "10111111110110000110111001111000", 
    86 => "10111111100101010010011001000011", 
    87 => "00111101111111110101010010000011", 
    88 => "00111111001001011000101011011100", 
    89 => "10111111100011111111111010110111", 
    90 => "00111110010101001011000000010101", 
    91 => "00111111100100010110101010111011", 
    92 => "00111111010111111100111010010000", 
    93 => "10111111101001100000111111100001", 
    94 => "10111101011001100110101111000011", 
    95 => "11000000000011011010110001000010", 
    96 => "10111110000010010100111010110111", 
    97 => "10111111010010011010110000010001", 
    98 => "11000000000010000101100010011001", 
    99 => "00111111001000110110010111110010" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;


Library IEEE;
use IEEE.std_logic_1164.all;

entity face_classifier_cBew is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 100;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of face_classifier_cBew is
    component face_classifier_cBew_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    face_classifier_cBew_rom_U :  component face_classifier_cBew_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

