//  LINUX TERMINAL COLORS TO C++
#ifndef _COLORS_
#define _COLORS_

#define RST   "\x1B[0m"

#define FORE_BLK  "\x1B[30m"
#define FORE_RED  "\x1B[31m"
#define FORE_GRN  "\x1B[32m"
#define FORE_YEL  "\x1B[33m"
#define FORE_BLU  "\x1B[34m"
#define FORE_MAG  "\x1B[35m"
#define FORE_CYN  "\x1B[36m"
#define FORE_WHT  "\x1B[37m"

#define BACK_BLK  "\x1B[40m"
#define BACK_RED  "\x1B[41m"
#define BACK_GRN  "\x1B[42m"
#define BACK_YEL  "\x1B[43m"
#define BACK_BLU  "\x1B[44m"
#define BACK_MAG  "\x1B[45m"
#define BACK_CYN  "\x1B[46m"
#define BACK_WHT  "\x1B[47m"

#define FBLK(x) FORE_BLK x RST
#define FRED(x) FORE_RED x RST
#define FGRN(x) FORE_GRN x RST
#define FYEL(x) FORE_YEL x RST
#define FBLU(x) FORE_BLU x RST
#define FMAG(x) FORE_MAG x RST
#define FCYN(x) FORE_CYN x RST
#define FWHT(x) FORE_WHT x RST

#define BBLK(x) BACK_BLK x RST
#define BRED(x) BACK_RED x RST
#define BGRN(x) BACK_GRN x RST
#define BYEL(x) BACK_YEL x RST
#define BBLU(x) BACK_BLU x RST
#define BMAG(x) BACK_MAG x RST
#define BCYN(x) BACK_CYN x RST
#define BWHT(x) BACK_WHT x RST

#define BOLD(x)	"\x1B[1m" x RST
#define UNDL(x)	"\x1B[4m" x RST
#define INVR(x)	"\x1B[7m" x RST

#endif  /* _COLORS_ */
