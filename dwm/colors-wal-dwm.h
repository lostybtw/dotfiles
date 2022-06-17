static const char norm_fg[] = "#aacaef";
static const char norm_bg[] = "#2c1c24";
static const char norm_border[] = "#768da7";

static const char sel_fg[] = "#aacaef";
static const char sel_bg[] = "#6F9992";
static const char sel_border[] = "#aacaef";

static const char urg_fg[] = "#aacaef";
static const char urg_bg[] = "#4657CF";
static const char urg_border[] = "#4657CF";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
