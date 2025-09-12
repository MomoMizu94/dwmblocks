//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		        /*Update Interval*/	/*Update Signal*/
    {"",    "sb-music",                             2,      17},
    {"",    "price btc Bitcoin  ",                 60,     11},
    {"",    "price eth Ethereum  ",                60,     12},
    {"󰻠 ",  "cpu-temp",	                            2,      14},
    {"  ", "mem-usage",                            4,      15},
    {"  ", "gpu-temp",                             2,      16},
    {"",    "weather",                              3600,    2},
    {"  ", "clock",                                10,      1},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 3;
