/* color theme for st */
/*
    required items
    - colorname array with 16 colors
    - defaultfg value
    - defaultbg value
    - defaultcs value
    - defaultrcs value
    optional
    - defaultitalic value
    - defaultunderline value
 */

/* eqie6 color theme for primary theme */
static const char *colorname[] = {
    /* 8 normal colors */
    [0] = "#222222",               /* black   */
    [1] = "#e84f4f",               /* red     */
    [2] = "#b7ce42",               /* green   */
    [3] = "#fea63c",               /* yellow  */
    [4] = "#66a9b9",               /* blue    */
    [5] = "#b7416e",               /* magenta */
    [6] = "#6d878d",               /* cyan    */
    [7] = "#cccccc",               /* white   */

    /* 8 bright colors */
    [8]  = "#666666",               /* black   */
    [9]  = "#d23d3d",               /* red     */
    [10] = "#bde077",               /* green   */
    [11] = "#ffe863",               /* yellow  */
    [12] = "#aaccbb",               /* blue    */
    [13] = "#e16a98",               /* magenta */
    [14] = "#42717b",               /* cyan    */
    [15] = "#ffffff",               /* white   */

    /* special colors */
    [256] = "#111111",               /* background */
    [257] = "#cccccc",               /* foreground */
};
/* euphrasia color theme for alt colors */
static const char *altcolorname[] = {

    /* 8 normal colors */
    [0] = "#192033",               /* black   */
    [1] = "#a62a3e",               /* red     */
    [2] = "#38912b",               /* green   */
    [3] = "#b27d12",               /* yellow  */
    [4] = "#355c9a",               /* blue    */
    [5] = "#7c4f9f",               /* magenta */
    [6] = "#258f8f",               /* cyan    */
    [7] = "#77858c",               /* white   */

    /* 8 bright colors */
    [8]  = "#666666",               /* black   */
    [9]  = "#f04758",               /* red     */
    [10] = "#93c724",               /* green   */
    [11] = "#ddb62b",               /* yellow  */
    [12] = "#45a3e6",               /* blue    */
    [13] = "#c953ef",               /* magenta */
    [14] = "#60c6c8",               /* cyan    */
    [15] = "#c0c0c0",               /* white   */

    /* special colors */
    [256] = "#cfcfd9",               /* background */
    [257] = "#1c2027",               /* foreground */
};
/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
static unsigned int defaultfg = 257;
static unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;
static unsigned int defaultrcs = 257;
/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;
