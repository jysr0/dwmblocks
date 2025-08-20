//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval in s*/	/*Update Signal*/
	{"| ram: ",	"free -h | awk '/^Mem/ { print $3 }' | sed s/i//g",	30,		0}, 
	{"cpu: ",	"sensors | tr -d '+' | awk 'NR == 3 { print $4 }'",	30,	0},	
	
      /*{"👤 ",	"ip -f inet address | awk 'NR==6 { print $2 }'",	10,	0},*/
	{"",	"internet_dwmblocks.sh",	3,	0},		
      
      /*{"root: ",	"df -h | awk 'NR==5 { print $5 }'",	3600,	0},*/ 
      /*{"home: ",	"df -h | awk 'NR==11 { print $5 }'",	3600,	0},*/   

      /*{"",	"a.out | awk 'NR == 2 { print $3 }'",	1,	0},*/	
      
      /*{"bat: ",    "acpi -b | awk --field-separator=, '{ print $2 }'",	120,	0},*/		
	{"",    "battery_dwmblocks.sh",	120,	0},	
      /*{"🔆 ",	"brightnessctl | tr -d '()' | awk 'NR == 2 { print $4 }'",	0,	2},*/		
        {"",	"volume_dwmblocks.sh",	0,	5},				
	
      /*{"up: ",	"uptime | awk '{print $3}' | tr -d ,",	60,	0},*/	
	
	{"", "date '+%B %d'",					86400,		0},
	{"", "date '+%R'",					60,		0},	
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
