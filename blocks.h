//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"net: ", "netconnstat", 5, 5},
	{"vol: ", "amixer sget Master | awk -F'[][]' '/dB/{print $2}'", 0, 7},
	{"bat: ", "batstat", 10, 8},
	{"", "date '+%a %d %b - %H:%M'", 60, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
