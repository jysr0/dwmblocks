//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval in s*/	/*Update Signal*/
	{"┃ ram: ",	"free -h | awk '/^Mem/ { print $3 }' | sed s/i//g",	30,		0}, /* default after print: $3\"/\"$2 */ 
	{"cpu: ",	"sensors | tr -d '+' | awk 'NR == 3 { print $4 }'",	30,	0},	

	{"💽 ",	"df -h | awk 'NR==5 { print $5 }'",	3600,	0},    
	{"💾 ",	"df -h | awk 'NR==11 { print $5 }'",	3600,	0},    

      /*{"⌨ ",	"a.out | awk 'NR == 2 { print $3 }'",	1,	0},*/	
      
      /*{"🔋",    "acpi -b | awk --field-separator=, '{ print $2 }'",	120,	0},*/		
	{"🔋 ",    "battery.block",	120,	0},	
      /*{"🔆 ",	"brightnessctl | tr -d '()' | awk 'NR == 2 { print $4 }'",	0,	2},*/		
        {"",	"volume.block",	0,	5},				
	
	{"",	"internet.block",	3,	0},		
      /*{"up: ",	"uptime | awk '{print $3}' | tr -d ,",	60,	0},*/	
	
	{"📆 ", "date '+%m.%d'",					86400,		0},
	{"⏰ ", "date '+%R'",					60,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " ┃ ";
static unsigned int delimLen = 5;
