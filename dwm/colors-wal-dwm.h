static const char norm_fg[] = "#ccd8d7";
static const char norm_bg[] = "#0D0E0D";
static const char norm_border[] = "#8e9796";

static const char sel_fg[] = "#ccd8d7";
static const char sel_bg[] = "#527889";
static const char sel_border[] = "#ccd8d7";

static const char urg_fg[] = "#ccd8d7";
static const char urg_bg[] = "#C69B72";
static const char urg_border[] = "#C69B72";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeSel] =  { urg_fg,      urg_bg,    urg_border },
};
