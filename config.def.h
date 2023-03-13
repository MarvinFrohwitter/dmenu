/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int promptheight = 30;                      /* size only the prompt heigt to the bar heigt in normalmode */
static int vertpad = 10;                      /* offsets the prompt vertical, to be exactly the dwmbar padding  */
static int sidepad = 10;                      /* offsets the prompt horizontal, to be exactly the dwmbar padding  */
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0xdd;
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:size=10";
static char *fonts[]   = {font, "JetBrainsMono Nerd Font:pixelsize=14:antialias=true:autohint=true", "JoyPixels:size=12:antialias=true:autohint=true" };
static char *prompt      = ">>>";      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";

static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeOut] = { "#000000", "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 20;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 12;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 1;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",        STRING, &font },
	{ "color4", STRING, &normfgcolor },
	{ "color0", STRING, &normbgcolor },
	{ "color0",  STRING, &selfgcolor },
	{ "color4",  STRING, &selbgcolor },
	{ "prompt",      STRING, &prompt },
};
