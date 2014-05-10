#include <terminal.h>
#include <bwio.h>
#include <types.h>
#include <io.h>

/*
 * Function to initialize terminal
 */
void term_print() {
    bwprintf( COM2, "\x1b[2J");
    bwprintf( COM2, "+-----------------------------------------------------------------------------------------------------------+\r" );
    bwprintf( COM2, "| ExpressOS >                                                                  +--------------------------+ |\r" );
    bwprintf( COM2, "|                                                                              |    Timer:  00:00:00:0    | |\r" );
    bwprintf( COM2, "|                                                                              +--------------------------+ |\r" );
    bwprintf( COM2, "|                                                                              +------+ +-----------------+ |\r" );
    bwprintf( COM2, "|                                                                              |      | |                 | |\r" );
    bwprintf( COM2, "|                                                                              |sensor| |    Switches     | |\r" );
    bwprintf( COM2, "|                                                                              |      | |                 | |\r" );
    bwprintf( COM2, "|                                                                              +------+ +--------+--------+ |\r" );
    bwprintf( COM2, "|                                                                              |      | | 01:  s | 02:  s | |\r" );
    bwprintf( COM2, "|                                                                              |      | +--------+--------+ |\r" );
    bwprintf( COM2, "|                                                                              |      | | 03:  s | 04:  s | |\r" );
    bwprintf( COM2, "|                                                                              |      | +--------+--------+ |\r" );
    bwprintf( COM2, "|                                                                              |      | | 05:  s | 06:  s | |\r" );
    bwprintf( COM2, "|                                                                              |      | +--------+--------+ |\r" );
    bwprintf( COM2, "|                                                                              |      | | 07:  s | 08:  s | |\r" );
    bwprintf( COM2, "|                                                                              |      | +--------+--------+ |\r" );
    bwprintf( COM2, "|                                                                              |      | | 09:  s | 10:  s | |\r" );
    bwprintf( COM2, "|                                                                              |      | +--------+--------+ |\r" );
    bwprintf( COM2, "|                                                                              |      | | 11:  s | 12:  s | |\r" );
    bwprintf( COM2, "|                                                                              |      | +--------+--------+ |\r" );
    bwprintf( COM2, "|                                                                              |      | | 13:  s | 14:  s | |\r" );
    bwprintf( COM2, "|                                                                              |      | +--------+--------+ |\r" );
    bwprintf( COM2, "|                                                                              |      | | 15:  s | 16:  s | |\r" );
    bwprintf( COM2, "|                                                                              |      | +--------+--------+ |\r" );
    bwprintf( COM2, "|                                                                              |      | | 17:  s | 18:  s | |\r" );
    bwprintf( COM2, "|                                                                              |      | +--------+--------+ |\r" );
    bwprintf( COM2, "|                                                                              |      | | 99:  s | 9A:  s | |\r" );
    bwprintf( COM2, "|                                                                              |      | +--------+--------+ |\r" );
    bwprintf( COM2, "|                                                                              |      | | 9C:  s | 9B:  s | |\r" );
    bwprintf( COM2, "|                                                                              +------+ +--------+--------+ |\r" );
    bwprintf( COM2, "+-----------------------------------------------------------------------------------------------------------+\r" );
    bwprintf( COM2, "\x1b[1;14H" );
}

/*
 * Function to add a sensor
 */
void sensor_print() {

}

/*
 * Function to add a input line
 */
void input_print() {

}

/*
 * Function to change a switch display
 */
void switch_print() {

}

/*
 *
 */
void time_print(time_t time) {

}
