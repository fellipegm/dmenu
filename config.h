/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;  /* -F  option; if 0, dmenu doesn't use fuzzy matching  */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Hack Nerd Font Mono:style=Regular:size=14:antialias=true:hinting=true",
    "JoyPixels:style=Regular:size=13:antialias=true",
};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#bbbbbb", "#002b36"},
    [SchemeSel] = {"#eee8d5", "#2aa198"},
    [SchemeSelHighlight] = {"#ffc978", "#005577"},
    [SchemeNormHighlight] = {"#ffc978", "#222222"},
    [SchemeMid] = {"#eeeeee", "#6c71c4"},
    [SchemeOut] = {"#000000", "#00ffff"},
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines = 4;
static unsigned int columns = 8;
static unsigned int lineheight = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 3;
