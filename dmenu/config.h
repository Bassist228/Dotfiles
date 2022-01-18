static int topbar = 1;
static int centered = 1;
static int min_width = 500;
static const char *fonts[] = {
	"Mononoki Nerd Font:size=10"
};
static const unsigned int bgalpha = 0xa0;
static const unsigned int fgalpha = OPAQUE;
static const unsigned int selalpha = 0xc0;
static const char *prompt      = "run:";
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#1C1E26" },
	[SchemeSel] = { "#eeeeee", "#F43E5C" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
static const unsigned int alphas[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { fgalpha, bgalpha },
	[SchemeSel] = { fgalpha, selalpha },
	[SchemeOut] = { fgalpha, bgalpha },
};

static unsigned int lines      = 5;
static unsigned int columns    = 1;

static const char worddelimiters[] = " ";

static const unsigned int border_width = 5;
