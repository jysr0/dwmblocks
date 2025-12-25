//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/		/*Update Interval in s*/	/*Update Signal*/
    //{"ROOT: ",	"df -h | awk 'NR==5 { print $5 }'",	3600,	0},
    //{"HOME: ",	"df -h | awk 'NR==11 { print $5 }'",	3600,	0},
    //{"IP: ",	"ip -f inet address | awk 'NR==6 { print $2 }'",	10,	0},
    //{"KeyB: ",	"a.out | awk 'NR==2 { print $3 }'",	1,	0},

    //{" ",	"dwmb_ram.sh",	120,		0}, 
    {" ",	"dwmb_cpu.sh",	120,	0},	
    {"",	"dwmb_network.sh",	60,	0},		
    //{"",	"dwmb_rxtx.sh",	10,	0},
    {"",    "dwmb_battery.sh",	300,	0},	
    {"",	"dwmb_brightness.sh",	0,	2},
    {"",	"dwmb_volume.sh",	0,	5},				
    {"", 	"dwmb_clock.sh",	60,	0},
    //{"", 	"dwmb_kernel.sh",	3600,	0},
    //{"",	"dwmb_uptime.sh",	600,	0},
    //{"",	"dwmb_playing.sh",	3,	0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "|";
static unsigned int delimLen = 5;
