/*                                      42 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────────────┬────────────────────────────╮ ╭─────────────────────────────┬─────────────────────────────╮
  │  0   1   2   3   4   5   6 │  7   8   9  10  11  12  13 │ │ LT5 LT4 LT3 LT2 LT1 LT0 LTE │ RTE RT0 RT1 RT2 RT3 RT4 RT5 │
  │ 14  15  16  17  18  19  20 │ 21  22  23  24  25  26  27 │ │ LM5 LM4 LM3 LM2 LM1 LM0 LME │ RME RM0 RM1 RM2 RM3 RM4 RM5 │
  │ 28  29  30  31  32  33     │     34  35  36  37  38  39 │ │ LB5 LB4 LB3 LB2 LB1 LB0     │     RB0 RB1 RB2 RB3 RB4 RB5 │
  ╰───────────╮ 40  41  42     │     43  44  45 ╭───────────╯ ╰───────────╮ LH2 LH1 LH0     │     RH0 RH1 RH2 ╭───────────╯
              ╰────────────────┴────────────────╯                         ╰─────────────────┴─────────────────╯             */

#pragma once

#define LTE  6  // left-top row
#define LT0  5
#define LT1  4
#define LT2  3
#define LT3  2
#define LT4  1
#define LT5  0

#define RTE  7
#define RT0  8  // right-top row
#define RT1  9
#define RT2 10 
#define RT3 11
#define RT4 12
#define RT5 13

#define LME 20  // left-middle row
#define LM0 19
#define LM1 18
#define LM2 17
#define LM3 16
#define LM4 15
#define LM5 14

#define RME 21  // right-middle row
#define RM0 22 
#define RM1 23 
#define RM2 24
#define RM3 25
#define RM4 26
#define RM5 27

#define LB0 33  // left-bottom row
#define LB1 32
#define LB2 31
#define LB3 30
#define LB4 29
#define LB5 28

#define RB0 34  // right-bottom row
#define RB1 35
#define RB2 36
#define RB3 37
#define RB4 38
#define RB5 39

#define LH0 42  // left thumb keys
#define LH1 41 
#define LH2 40

#define RH0 43  // right thumb keys
#define RH1 44
#define RH2 46
