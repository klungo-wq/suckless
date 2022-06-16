/* user and group to drop privileges to */
static const char *user  = "klungo";
static const char *group = "klungo";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "orange",     /* after initialization */
	[INPUT] =  "#5E81AC",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
