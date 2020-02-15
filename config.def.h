/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * The X position of where to place the menu. If larger than the monitor
 * itself, it will reset itself to 0
 *
 * Will adjust width of menu (unless userWidth is set) to make sure the
 * menu is not outside of the monitor
 */
static int userPositionX = 0;

/*
 * The Y position of where to place the menu. If larger than the monitor
 * itself, it will reset itself to 0
 *
 * Will NOT adjust height automatically and may therefore draw outside
 * of the monitor
 */
static int userPositionY = 0;

/**
 * Allows you to set the width of the bar itself, when 0 it fills
 * the entire monitor as dmenu has always done
 */
static int userWidth = 0;
