static const char norm_fg[] = "#adadac";
static const char norm_bg[] = "#0B0F12";
static const char norm_border[] = "#797978";

static const char sel_fg[] = "#adadac";
static const char sel_bg[] = "#2D3C44";
static const char sel_border[] = "#adadac";

static const char urg_fg[] = "#adadac";
static const char urg_bg[] = "#1B3544";
static const char urg_border[] = "#1B3544";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
//  [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
