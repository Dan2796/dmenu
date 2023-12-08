/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Cascadia Mono PL:size=12"
};

static const char col_frost_1[]     = "#8fbcbb"; 
static const char col_frost_2[]     = "#88c0d0"; 
static const char col_frost_3[]     = "#81a1c1"; 
static const char col_frost_4[]     = "#5e81ac"; 
static const char col_aurora_1[]    = "#bf616a"; 
static const char col_aurora_2[]    = "#d08770"; 
static const char col_aurora_3[]    = "#ebcb8b"; 
static const char col_aurora_4[]    = "#a3be8c"; 
static const char col_aurora_5[]    = "#b48ead"; 
static const char col_polar_1[]     = "#2e3440"; 
static const char col_polar_2[]     = "#3b4252"; 
static const char col_polar_3[]     = "#434c5e"; 
static const char col_polar_4[]     = "#4c566a"; 
static const char col_snow_1[]      = "#d8dee9"; 
static const char col_snow_2[]      = "#e5e9f0"; 
static const char col_snow_3[]      = "#eceff4"; 

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_snow_1,  col_polar_1},
	[SchemeSel] = { col_polar_1, col_aurora_5},
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 20;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 5;
