#include <ts7200.h>
#include <types.h>
#include <bwio.h>
#include <io.h>
#include <clock.h>
#include <parser.h>
#include <controller.h>

/*
 * Polling Loop
 */
int main( int argc, const char* argv[] ) {
    

    /* Initialize io */
    char data_read;
    io_setfifo( COM1, OFF );
    io_setspeed( COM1, 2400 );
    io_setfifo( COM2, OFF );
    io_setspeed( COM2, 115200 );

    /* Initialize Time and Timer */
    time_t elapsed_time = 0;
    timer_init();


    /* Initialize Scren */
    bwprintf( COM2, "\x1b[?25l \x1b[2J \x1b[H");

    /* Run instructions (Polling Loop) */
    while (system_status()) {
        /* Check Timer */
        elapsed_time = timer_getTime();
        // bwprintf( COM2, "\x1b[?25l\x1b[H");
        // timer_printTime(elapsed_time);
        // bwprintf( COM2, "\x1b[?25h");

        /* Write Check */
        /*
        if (io_canPut( COM1 ) > 0) {
            char c = READ FROM BUFFER;
            CHECK c;
            io_putc( COM1, c);
        }
        if (io_canPut( COM2 ) > 0) {
            char c = READ FROM BUFFER;
            CHECK c;
            io_putc( COM2, c);
        }

        */

        /* Read Check */
        /*
        if (io_canGet( COM2 ) > 0) {
            ???
            io_getc( COM2 );
        }
        */
        if (io_canGet( COM2 ) > 0) {
            data_read = io_getc( COM2 );
	        runState(data_read);
        }
    }

    return 0;
}
