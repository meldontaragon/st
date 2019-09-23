/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

				  /* 8 normal colors */
				  [0] = "#202020", /* black   */
				  [1] = "#b91e2e", /* red     */
				  [2] = "#81957c", /* green   */
				  [3] = "#f9bb80", /* yellow  */
				  [4] = "#356579", /* blue    */
				  [5] = "#2d2031", /* magenta */
				  [6] = "#0b3452", /* cyan    */
				  [7] = "#909090", /* white   */

				  /* 8 bright colors */
				  [8]  = "#606060", /* black   */
				  [9]  = "#d14548", /* red     */
				  [10] = "#a7b79a", /* green   */
				  [11] = "#fae3a0", /* yellow  */
				  [12] = "#7491a1", /* blue    */
				  [13] = "#87314e", /* magenta */
				  [14] = "#0f829d", /* cyan    */
				  [15] = "#fff0f0", /* white   */

				  /* special colors */
				  [256] = "#101010", /* background */
				  [257] = "#d2c5bc", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
static unsigned int defaultfg = 257;
static unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;
