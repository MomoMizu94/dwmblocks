//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", ". /usr/local/bin/sb-music",                           2,              17},
    //{"", ". /usr/local/bin/sb-record",                          2,                13},
    {"", ". /usr/local/bin/price btc Bitcoin  ",           60,             11},
    {"", ". /usr/local/bin/price eth Ethereum  ",          60,             12},
    {"󰻠 ", ". /usr/local/bin/cpu-temp",	                            2,             14},
    {"  ", ". /usr/local/bin/mem-usage",                            4,             15},
    {"  ", ". /usr/local/bin/gpu-temp",                             2,             16},
    {"", ". /usr/local/bin/weather",                                3600,           2},
    {"  ", ". /usr/local/bin/clock",                               10,             1},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 3;
