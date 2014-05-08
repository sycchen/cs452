#include <ts7200.h>
#include <types.h>
#include <bwio.h>
#include <clock.h>

/*
 * Polling Loop
 */
int main( int argc, const char* argv[] ) {
    /* Initialize Time and Timer */
    time_t elapsed_time = 0;
    timer_init();

    /* Initialize bwio */
    bwsetfifo( COM2, OFF );

    /* Hide cursor, clear screen, set cursor to home */
//    bwprintf( COM2, "\x1b[?25l \x1b[2J \x1b[H");

    /* Run instructions (Polling Loop) */
//    while (1) {
        /* Check Timer */
//        elapsed_time = timer_getTime();

        /* Print Time */
//        bwprintf( COM2, "\x1b[?35l\x1b[H");
//        timer_printTime(elapsed_time);
//        bwprintf( COM2, "\x1b[?25h");
        int data = bwgetc( COM2 );
        bwputc( COM2, (char)data );

        /* Check Buffer */

//    }

    return 0;
}
