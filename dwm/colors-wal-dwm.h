static const char norm_fg[] = "#bec4ce";
static const char norm_bg[] = "#09090E";
static const char norm_border[] = "#858990";

static const char sel_fg[] = "#bec4ce";
static const char sel_bg[] = "#5A688B";
static const char sel_border[] = "#bec4ce";

static const char urg_fg[] = "#bec4ce";
static const char urg_bg[] = "#545E70";
static const char urg_border[] = "#545E70";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeSel] =  { urg_fg,      urg_bg,    urg_border },
};
