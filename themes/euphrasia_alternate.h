/* alternate color theme for st */
/*
    types:
    Color name list (typically 15 colors + extras)
    - static const char *colorname[]
        OR
    - static const char *altcolorname[]

    Number background, foreground, and cursor
    - unsigned int defaultfg
    - unsigned int defaultbg
    - static unsigned int defaultcs
        OR
    - static unsigned int defaultrcs

    optional:
    Number for default italicized/underline
    - static unsigned int defaultitalic
    - static unsigned int defaultunderline
 */
/* Terminal colors (16 first used in escape sequence) */
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
 * alternate curse
 */
static unsigned int defaultrcs = 257;
