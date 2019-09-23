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




/* lowcontrast for primary theme */
static const char *colorname[] = {
    /* 8 normal colors */
    [0] = "#5f5f5f",               /* black   */
    [1] = "#d96468",               /* red     */
    [2] = "#a2d964",               /* green   */
    [3] = "#d9c964",               /* yellow  */
    [4] = "#64a2d9",               /* blue    */
    [5] = "#9a64d9",               /* magenta */
    [6] = "#64d9d5",               /* cyan    */
    [7] = "#989898",               /* white   */

    /* 8 bright colors */
    [8]  = "#828282",               /* black   */
    [9]  = "#d98f93",               /* red     */
    [10] = "#b8d98f",               /* green   */
    [11] = "#d9cf8f",               /* yellow  */
    [12] = "#8f99d9",               /* blue    */
    [13] = "#b08fd9",               /* magenta */
    [14] = "#8fd9d5",               /* cyan    */
    [15] = "#c5c5c5",               /* white   */

    /* special colors */
    [256] = "#3c3b37",               /* background */
    [257] = "#93a1a1",               /* foreground */
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
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;
static unsigned int defaultrcs = 257;
/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;
