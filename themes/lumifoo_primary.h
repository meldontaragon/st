/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    /* 8 normal colors */
    [0] = "#515151",               /* black   */
    [1] = "#bf6382",               /* red     */
    [2] = "#65a446",               /* green   */
    [3] = "#ad8a43",               /* yellow  */
    [4] = "#6b85c2",               /* blue    */
    [5] = "#9e6bb8",               /* magenta */
    [6] = "#5c9d88",               /* cyan    */
    [7] = "#919191",               /* white   */
    /* 8 bright colors */
    [8]  = "#707172",               /* black   */
    [9]  = "#eaaec2",               /* red     */
    [10] = "#aed49b",               /* green   */
    [11] = "#d4c3a0",               /* yellow  */
    [12] = "#afc4e9",               /* blue    */
    [13] = "#d2b1e2",               /* magenta */
    [14] = "#a4d0c1",               /* cyan    */
    [15] = "#d0d0d0",               /* white   */
    /* special colors */
    [256] = "#1e2021",               /* background */
    [257] = "#888a8c",               /* foreground */
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
