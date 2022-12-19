/* color theme for st */
/*
    types:
    Color name list (typically 15 colors + extras)
    - static const char *colorname[]
        OR
    - static const char *altcolorname[]

    Number for default foreground
    - unsigned int defaultfg

    Number for default background
    - unsigned int defaultbg

    Number for default cursor
    - static unsigned int defaultcs
        OR
    - static unsigned int defaultrcs

    optional:
    Number for default italicized
    - static unsigned int defaultitalic

    Number for default underline
    - static unsigned int defaultunderline
 */

/* Terminal colors (16 first used in escape sequence) */
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

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 257;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;
