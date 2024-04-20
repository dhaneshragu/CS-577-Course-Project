-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.2
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s_w6_V_rom is 
    generic(
             DWIDTH     : integer := 9; 
             AWIDTH     : integer := 10; 
             MEM_SIZE    : integer := 1000
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s_w6_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "110111011", 1 => "000101010", 2 => "000110100", 3 => "110100000", 
    4 => "000110111", 5 => "110010110", 6 => "000011010", 7 => "111110100", 
    8 => "110010110", 9 => "000001001", 10 => "110101001", 11 => "110011011", 
    12 => "001000101", 13 => "110110110", 14 => "111000111", 15 => "111000010", 
    16 => "111001110", 17 => "000100000", 18 => "111101011", 19 => "000000111", 
    20 => "111000000", 21 => "110110010", 22 => "000110001", 23 => "111010011", 
    24 => "000000101", 25 => "000110011", 26 => "000011101", 27 => "111001000", 
    28 => "110001110", 29 => "110110111", 30 => "001000000", 31 => "111100000", 
    32 => "000010001", 33 => "111100100", 34 => "110101111", 35 => "001000110", 
    36 => "000010001", 37 => "110101000", 38 => "111010100", 39 => "000011000", 
    40 => "111101000", 41 => "000000111", 42 => "000000100", 43 => "111101001", 
    44 => "001010111", 45 => "001001101", 46 => "000010100", 47 => "110100011", 
    48 => "110010110", 49 => "110110110", 50 => "111101111", 51 => "111001111", 
    52 => "111000011", 53 => "001100110", 54 => "111111110", 55 => "000000011", 
    56 => "110100111", 57 => "110110010", 58 => "111000101", 59 => "110010111", 
    60 => "001010111", 61 => "001110000", 62 => "110101001", 63 => "000110010", 
    64 => "110100100", 65 => "111010000", 66 => "111001101", 67 => "001010110", 
    68 => "110111100", 69 => "000001010", 70 => "111001011", 71 => "001110100", 
    72 => "111110010", 73 => "110111101", 74 => "001011110", 75 => "001011000", 
    76 => "110101101", 77 => "000111111", 78 => "000000100", 79 => "000100000", 
    80 => "110110100", 81 => "001011011", 82 => "000010110", 83 => "111110100", 
    84 => "000001011", 85 => "110110001", 86 => "000101100", 87 => "111001111", 
    88 => "000100101", 89 => "111001101", 90 => "001011001", 91 => "111100100", 
    92 => "111001110", 93 => "110111101", 94 => "110100000", 95 => "001001010", 
    96 => "110001001", 97 => "110111111", 98 => "111001100", 99 => "001010100", 
    100 => "001101011", 101 => "000011101", 102 => "111010001", 103 => "000011000", 
    104 => "001010100", 105 => "000111010", 106 => "111101010", 107 => "000011110", 
    108 => "111011000", 109 => "000111110", 110 => "110110000", 111 => "110011101", 
    112 => "111110010", 113 => "111110000", 114 => "111100001", 115 => "000011010", 
    116 => "001000110", 117 => "000001011", 118 => "000100000", 119 => "000111100", 
    120 => "111010000", 121 => "111101001", 122 => "111110001", 123 => "110111000", 
    124 => "001001000", 125 => "111001101", 126 => "001000111", 127 => "110011100", 
    128 => "000000000", 129 => "001010110", 130 => "000110110", 131 => "000000100", 
    132 => "110010010", 133 => "001011111", 134 => "001100001", 135 => "111001111", 
    136 => "110000101", 137 => "111001011", 138 => "000010101", 139 => "000110011", 
    140 => "001100110", 141 => "000101110", 142 => "000101101", 143 => "111011110", 
    144 => "111011101", 145 => "110111001", 146 => "000010001", 147 => "110101010", 
    148 => "001001101", 149 => "000000101", 150 => "001011001", 151 => "110011001", 
    152 => "000011100", 153 => "111011011", 154 => "110011111", 155 => "110111001", 
    156 => "111111100", 157 => "001011101", 158 => "110110000", 159 => "000110111", 
    160 => "111001111", 161 => "001110010", 162 => "110100010", 163 => "110100101", 
    164 => "000011011", 165 => "110011010", 166 => "111111110", 167 => "000000010", 
    168 => "111100100", 169 => "000000111", 170 => "001101101", 171 => "111001001", 
    172 => "110110111", 173 => "000001111", 174 => "000111010", 175 => "110101010", 
    176 => "001100111", 177 => "111000110", 178 => "000011111", 179 => "111011000", 
    180 => "001100101", 181 => "001101001", 182 => "000010000", 183 => "111110111", 
    184 => "110101011", 185 => "110100001", 186 => "001101101", 187 => "000100010", 
    188 => "001101101", 189 => "000101001", 190 => "000101101", 191 => "111001000", 
    192 => "110110001", 193 => "111111110", 194 => "110100100", 195 => "110110110", 
    196 => "111111111", 197 => "111010001", 198 => "111100001", 199 => "110101000", 
    200 => "000101110", 201 => "001100110", 202 => "111101011", 203 => "001011001", 
    204 => "001101000", 205 => "110100101", 206 => "001000010", 207 => "110110011", 
    208 => "110110111", 209 => "111110100", 210 => "000101011", 211 => "111011110", 
    212 => "110100111", 213 => "110110001", 214 => "000000111", 215 => "110010101", 
    216 => "001011011", 217 => "111111011", 218 => "000100101", 219 => "111000000", 
    220 => "111110111", 221 => "110010010", 222 => "000011001", 223 => "001011111", 
    224 => "110100110", 225 => "110100001", 226 => "001001110", 227 => "111111011", 
    228 => "111101111", 229 => "111000100", 230 => "111111100", 231 => "111010101", 
    232 => "111111011", 233 => "110011111", 234 => "111110000", 235 => "111000110", 
    236 => "111001000", 237 => "001010011", 238 => "001101000", 239 => "001010101", 
    240 => "110011000", 241 => "000011000", 242 => "111010100", 243 => "111001001", 
    244 => "110100000", 245 => "001010010", 246 => "000000110", 247 => "110101011", 
    248 => "111101111", 249 => "000000001", 250 => "110111100", 251 => "111111000", 
    252 => "110110010", 253 => "000001111", 254 => "111101000", 255 => "000111010", 
    256 => "010000110", 257 => "111010000", 258 => "111000010", 259 => "000000101", 
    260 => "111000101", 261 => "111110110", 262 => "000011000", 263 => "110100011", 
    264 => "001001101", 265 => "111010010", 266 => "001010010", 267 => "000110110", 
    268 => "110101010", 269 => "110011111", 270 => "111000000", 271 => "110101000", 
    272 => "000101011", 273 => "001000101", 274 => "111000010", 275 => "111011011", 
    276 => "111101001", 277 => "111011011", 278 => "000100110", 279 => "111111100", 
    280 => "001110111", 281 => "110110011", 282 => "111100110", 283 => "111000111", 
    284 => "111111011", 285 => "111011101", 286 => "111100001", 287 => "111011010", 
    288 => "000000100", 289 => "110011001", 290 => "000001111", 291 => "110011001", 
    292 => "110010000", 293 => "110101010", 294 => "000010100", 295 => "111110101", 
    296 => "000100101", 297 => "111101010", 298 => "111010100", 299 => "000110000", 
    300 => "111000000", 301 => "000000101", 302 => "001100101", 303 => "000111111", 
    304 => "111101100", 305 => "111010000", 306 => "001100110", 307 => "111011010", 
    308 => "000001101", 309 => "111001111", 310 => "110011101", 311 => "111100101", 
    312 => "111010110", 313 => "111101100", 314 => "110111001", 315 => "001010110", 
    316 => "110101111", 317 => "111110101", 318 => "111011100", 319 => "001110011", 
    320 => "000100010", 321 => "000011000", 322 => "111001100", 323 => "001000010", 
    324 => "001100111", 325 => "001001001", 326 => "111000000", 327 => "110101110", 
    328 => "000100011", 329 => "001001000", 330 => "000011111", 331 => "110111010", 
    332 => "111001001", 333 => "110100001", 334 => "000101001", 335 => "111010010", 
    336 => "001100011", 337 => "110111011", 338 => "000011101", 339 => "001011111", 
    340 => "001100111", 341 => "001110010", 342 => "110110100", 343 => "000001111", 
    344 => "111100010", 345 => "110101010", 346 => "000101000", 347 => "000010100", 
    348 => "111110110", 349 => "111011101", 350 => "001011011", 351 => "111101101", 
    352 => "001101010", 353 => "001011101", 354 => "000000001", 355 => "000010001", 
    356 => "110101011", 357 => "110111000", 358 => "001101000", 359 => "001100011", 
    360 => "001001110", 361 => "000100110", 362 => "111101100", 363 => "001011011", 
    364 => "001011111", 365 => "000111100", 366 => "000011111", 367 => "001011001", 
    368 => "110110111", 369 => "001011010", 370 => "110100110", 371 => "111000001", 
    372 => "001011011", 373 => "111100001", 374 => "111101111", 375 => "111110011", 
    376 => "111001010", 377 => "001000001", 378 => "110010110", 379 => "000101101", 
    380 => "001000111", 381 => "110001011", 382 => "000011000", 383 => "110110000", 
    384 => "001000010", 385 => "000001011", 386 => "001000110", 387 => "111000100", 
    388 => "110111000", 389 => "111001000", 390 => "110010110", 391 => "000001000", 
    392 => "001000111", 393 => "111101001", 394 => "000011011", 395 => "001001000", 
    396 => "110110110", 397 => "000010000", 398 => "111001111", 399 => "110110100", 
    400 => "000000101", 401 => "110111111", 402 => "001011110", 403 => "111101011", 
    404 => "001010110", 405 => "110100111", 406 => "110001111", 407 => "001000111", 
    408 => "000001100", 409 => "110011001", 410 => "110101101", 411 => "001001010", 
    412 => "111111000", 413 => "000001001", 414 => "110110101", 415 => "110100010", 
    416 => "001111000", 417 => "110110100", 418 => "111111101", 419 => "001010101", 
    420 => "111111101", 421 => "001101111", 422 => "001001000", 423 => "110010110", 
    424 => "000111000", 425 => "001100011", 426 => "000111000", 427 => "001010001", 
    428 => "000000001", 429 => "001101110", 430 => "000111110", 431 => "001011001", 
    432 => "111010011", 433 => "000010010", 434 => "000011011", 435 => "001010110", 
    436 => "000001001", 437 => "110101011", 438 => "001110101", 439 => "111001000", 
    440 => "111010101", 441 => "001010010", 442 => "110111111", 443 => "000100011", 
    444 => "000011100", 445 => "000100101", 446 => "000111010", 447 => "110101100", 
    448 => "000011011", 449 => "001010000", 450 => "001011110", 451 => "000100001", 
    452 => "111011111", 453 => "111101000", 454 => "000111100", 455 => "001100010", 
    456 => "000000101", 457 => "000110000", 458 => "110111010", 459 => "000000011", 
    460 => "111000000", 461 => "110111000", 462 => "111101111", 463 => "110110010", 
    464 => "110101100", 465 => "110010011", 466 => "001101010", 467 => "110011110", 
    468 => "001000101", 469 => "110111111", 470 => "000000100", 471 => "111010111", 
    472 => "111111001", 473 => "000111111", 474 => "000110011", 475 => "000111011", 
    476 => "111000010", 477 => "000100101", 478 => "111111101", 479 => "001001011", 
    480 => "000000010", 481 => "001011011", 482 => "000100111", 483 => "110011111", 
    484 => "000010100", 485 => "111000101", 486 => "001000011", 487 => "001000010", 
    488 => "001100000", 489 => "110110010", 490 => "111110000", 491 => "000100101", 
    492 => "111110110", 493 => "000110111", 494 => "110011111", 495 => "000000111", 
    496 => "110011001", 497 => "001100010", 498 => "000111101", 499 => "001010000", 
    500 => "111001110", 501 => "111100110", 502 => "111101100", 503 => "000001001", 
    504 => "000100000", 505 => "000101001", 506 => "001000111", 507 => "111000100", 
    508 => "000100010", 509 to 510=> "001011010", 511 => "000000011", 512 => "111011100", 
    513 => "000101010", 514 => "110011111", 515 to 516=> "000100101", 517 => "000110010", 
    518 => "001110001", 519 => "111000110", 520 => "000011101", 521 => "111011101", 
    522 => "110010100", 523 => "000111101", 524 => "111001010", 525 => "111111110", 
    526 => "111011000", 527 => "110110000", 528 => "111100110", 529 => "000000101", 
    530 => "111010101", 531 => "111101010", 532 => "110100010", 533 => "001010111", 
    534 => "000000010", 535 => "001001111", 536 => "000111101", 537 => "001001111", 
    538 => "110101000", 539 => "111101001", 540 => "111000110", 541 => "001000011", 
    542 => "111110110", 543 => "111100110", 544 => "111000101", 545 => "000010010", 
    546 => "001010111", 547 => "110110000", 548 => "001000101", 549 => "001001100", 
    550 => "001011010", 551 => "001011011", 552 => "111000101", 553 => "000101110", 
    554 => "000111001", 555 => "110110000", 556 => "000000101", 557 => "111001100", 
    558 => "111010111", 559 => "000111000", 560 => "111110000", 561 => "110010111", 
    562 => "110000111", 563 => "111110011", 564 => "110111001", 565 => "111110011", 
    566 => "110101000", 567 => "000101000", 568 => "111001101", 569 => "001000100", 
    570 => "000100100", 571 => "110011101", 572 => "001000110", 573 => "111010001", 
    574 => "110011010", 575 => "110011111", 576 => "110110010", 577 => "001001010", 
    578 => "000001010", 579 => "110111101", 580 => "000011011", 581 => "111011011", 
    582 => "000010111", 583 => "110011011", 584 => "110101011", 585 => "001001001", 
    586 => "000101110", 587 => "111110000", 588 => "000010101", 589 => "111111011", 
    590 => "000110101", 591 => "001001111", 592 => "001011001", 593 => "110100101", 
    594 => "001010110", 595 => "001001111", 596 => "001000010", 597 => "000110101", 
    598 => "110101010", 599 => "111100001", 600 => "001000011", 601 => "111000100", 
    602 => "111101001", 603 => "110111000", 604 => "111111110", 605 => "111110101", 
    606 => "000110100", 607 => "110101110", 608 => "001000110", 609 => "001000101", 
    610 => "001011011", 611 => "111110001", 612 => "001000000", 613 => "000011100", 
    614 => "000100101", 615 => "001000001", 616 => "001011100", 617 => "110011111", 
    618 => "111011000", 619 => "110111001", 620 => "001001000", 621 => "000101010", 
    622 => "110011010", 623 => "110100100", 624 => "110011111", 625 => "111110010", 
    626 => "001100110", 627 => "001011100", 628 => "111011001", 629 => "000110010", 
    630 => "110110111", 631 => "001001110", 632 => "000111111", 633 => "111010110", 
    634 => "110111111", 635 => "111000001", 636 => "001101000", 637 => "001011100", 
    638 => "111000111", 639 => "111001011", 640 => "001100011", 641 => "110101001", 
    642 => "001000011", 643 => "111101101", 644 => "111110000", 645 => "000101100", 
    646 => "111001101", 647 => "000110010", 648 => "111000101", 649 => "111001111", 
    650 => "001110000", 651 => "000011110", 652 => "111001100", 653 => "001000000", 
    654 => "110110111", 655 => "000100110", 656 => "001001001", 657 => "110101000", 
    658 => "110001111", 659 => "111111011", 660 => "001100101", 661 => "111010010", 
    662 => "000000111", 663 => "111010000", 664 => "111011111", 665 => "111000100", 
    666 => "000010010", 667 => "000011110", 668 => "001011000", 669 => "110101100", 
    670 => "000001000", 671 => "111000111", 672 => "001100010", 673 => "111010110", 
    674 => "001000100", 675 => "000100001", 676 => "111111000", 677 => "111001101", 
    678 => "110010011", 679 => "000001100", 680 => "000001000", 681 => "111000011", 
    682 => "111010011", 683 => "111010010", 684 => "000001001", 685 => "110011111", 
    686 => "001010000", 687 => "000000110", 688 => "110111000", 689 => "000001110", 
    690 => "000110100", 691 => "111111111", 692 => "000110000", 693 => "110101101", 
    694 => "000011110", 695 => "000100011", 696 => "000100101", 697 => "110011011", 
    698 => "111101110", 699 => "111011000", 700 => "110100101", 701 => "000011111", 
    702 => "111101011", 703 => "110011111", 704 => "000010010", 705 => "111000101", 
    706 => "110111000", 707 => "110110011", 708 => "001101110", 709 => "001011111", 
    710 => "111001101", 711 => "110010110", 712 => "111110110", 713 => "001011010", 
    714 => "001011100", 715 => "111101101", 716 => "111001010", 717 => "000100000", 
    718 => "111101011", 719 => "111000001", 720 => "001100100", 721 => "001101100", 
    722 => "000011011", 723 => "000001101", 724 => "000011100", 725 => "111100001", 
    726 => "110110111", 727 => "111011110", 728 => "110101111", 729 => "000010001", 
    730 => "000010000", 731 => "000000100", 732 => "110110001", 733 => "000110001", 
    734 => "000011010", 735 => "000100011", 736 => "111010011", 737 => "111000010", 
    738 => "001000100", 739 => "111111111", 740 => "001101001", 741 => "111011010", 
    742 => "111101110", 743 => "001011101", 744 => "001100110", 745 => "110111010", 
    746 => "000100000", 747 => "000011001", 748 => "111110011", 749 => "001000000", 
    750 => "111101010", 751 => "000010111", 752 => "110101110", 753 => "000000001", 
    754 => "001100110", 755 => "000010011", 756 => "111001101", 757 => "000010100", 
    758 => "110110111", 759 => "111001001", 760 => "110100011", 761 => "000110010", 
    762 => "110101000", 763 => "000100100", 764 => "110100101", 765 => "000001000", 
    766 => "110101101", 767 => "110101011", 768 => "000011001", 769 => "110111010", 
    770 => "110101100", 771 => "110011000", 772 => "111111111", 773 => "001010011", 
    774 => "000111000", 775 => "001100101", 776 => "111010001", 777 => "000100000", 
    778 => "000110011", 779 => "111101001", 780 => "111101011", 781 => "110011110", 
    782 => "111111010", 783 => "001100110", 784 => "000010110", 785 => "001100010", 
    786 => "110011100", 787 => "000110111", 788 => "110101011", 789 => "110100101", 
    790 => "000111101", 791 => "000101000", 792 => "110011101", 793 => "000001111", 
    794 => "000001000", 795 => "110010111", 796 => "001101111", 797 => "111110000", 
    798 => "000001110", 799 => "110011011", 800 => "001011001", 801 => "000111010", 
    802 => "111101011", 803 => "111001100", 804 => "001000111", 805 => "110110100", 
    806 => "001011100", 807 => "110101000", 808 => "111010011", 809 => "110111100", 
    810 => "110001110", 811 => "110100100", 812 => "111101011", 813 => "111111010", 
    814 => "000111000", 815 => "001000101", 816 => "111000010", 817 => "110101001", 
    818 => "001000001", 819 to 820=> "111100101", 821 => "110100110", 822 => "001000110", 
    823 => "000001001", 824 => "000010011", 825 => "001101011", 826 => "110111101", 
    827 => "000001000", 828 => "000100000", 829 => "001100010", 830 => "111011011", 
    831 => "001100001", 832 => "110101000", 833 => "000100110", 834 to 835=> "000111001", 
    836 => "000000111", 837 => "111000100", 838 => "001010010", 839 => "111010101", 
    840 => "000101100", 841 => "111101001", 842 => "110011101", 843 => "111101010", 
    844 => "111111000", 845 => "001010001", 846 => "000111010", 847 => "000110011", 
    848 => "000011001", 849 => "000000011", 850 => "110010100", 851 => "110101110", 
    852 => "000101110", 853 => "001001100", 854 => "001001010", 855 => "110100100", 
    856 => "001111010", 857 => "110011000", 858 => "111110000", 859 => "111001000", 
    860 => "001001011", 861 => "111111100", 862 => "001100100", 863 => "001011011", 
    864 => "001100101", 865 => "001100010", 866 => "001010110", 867 => "001010101", 
    868 => "110100011", 869 => "001000100", 870 => "111101010", 871 => "110001011", 
    872 => "111100110", 873 => "000100101", 874 => "111101001", 875 => "111010100", 
    876 => "111111001", 877 => "000111100", 878 => "001010111", 879 => "000110110", 
    880 => "111010000", 881 => "000011000", 882 => "110101000", 883 => "001001011", 
    884 => "000100001", 885 => "000110011", 886 => "110111010", 887 => "001000000", 
    888 => "111000010", 889 => "110100000", 890 => "001100111", 891 => "111000111", 
    892 => "000010001", 893 => "001101010", 894 => "000101011", 895 => "000010100", 
    896 => "001011011", 897 => "111101100", 898 => "000101100", 899 => "110101110", 
    900 => "111011010", 901 => "111110110", 902 => "001011010", 903 => "000000100", 
    904 => "000001010", 905 => "001011001", 906 => "110111111", 907 => "001100010", 
    908 => "110011110", 909 => "110010111", 910 => "001001001", 911 => "000000100", 
    912 => "111110101", 913 => "000101011", 914 => "001101001", 915 => "110101010", 
    916 => "000101100", 917 => "000111011", 918 => "001100100", 919 => "110011010", 
    920 => "111101011", 921 => "000111011", 922 => "001011000", 923 => "001000010", 
    924 => "111011101", 925 => "111001101", 926 => "001110001", 927 => "110011101", 
    928 => "000001001", 929 => "001001000", 930 => "001101011", 931 => "001101101", 
    932 => "111100001", 933 => "000110111", 934 => "111110110", 935 => "000111001", 
    936 => "000101100", 937 => "110111011", 938 => "001010011", 939 => "111000001", 
    940 => "110011000", 941 => "000101100", 942 => "111111011", 943 => "111101010", 
    944 => "111100001", 945 => "001000010", 946 => "111011001", 947 => "111100110", 
    948 => "001000001", 949 => "110111011", 950 => "001101101", 951 => "001011011", 
    952 => "000101110", 953 => "110111010", 954 => "110010001", 955 => "111000000", 
    956 => "000101000", 957 => "000100000", 958 => "111000111", 959 => "001000000", 
    960 => "111001001", 961 => "001010011", 962 => "110111100", 963 => "111110000", 
    964 => "001000011", 965 => "111111011", 966 => "000011011", 967 => "000101011", 
    968 => "110110101", 969 => "110100011", 970 => "111110111", 971 => "111000100", 
    972 => "001011010", 973 => "000111011", 974 => "001000010", 975 => "000010100", 
    976 => "000001100", 977 => "110100000", 978 => "000100100", 979 => "001010000", 
    980 => "001000110", 981 => "000001110", 982 => "111100100", 983 => "111101110", 
    984 => "001011100", 985 => "000101011", 986 => "000000011", 987 => "111101110", 
    988 => "000101010", 989 => "110100000", 990 => "111101111", 991 => "000101010", 
    992 => "000111000", 993 => "000101010", 994 => "000010001", 995 => "001011110", 
    996 => "001000011", 997 => "110101101", 998 => "001001001", 999 => "000100100" );


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

entity dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s_w6_V is
    generic (
        DataWidth : INTEGER := 9;
        AddressRange : INTEGER := 1000;
        AddressWidth : INTEGER := 10);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s_w6_V is
    component dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s_w6_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s_w6_V_rom_U :  component dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_s_w6_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

