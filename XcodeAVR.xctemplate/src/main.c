/* *************************************************************************\
 File:          main.c
 Date:
 
 Description:	
 
 Known bugs/missing features:
 
 Modifications:
 Date                Comment            
 ----       ------------------------------------------------
 
\****************************************************************************/

/* ********************* include files              *************************/

#include <stdint.h>
#include <stdbool.h>

#include <avr/interrupt.h>
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <util/delay.h>

#include "globals.h"
#include "main.h"

/* Store version # in program space to "burn" into flash */
/* Update version # in Makefile                          */

const char PROGMEM project_version[] =
    "Version: " VSTR(PROJECT_VERSION_MAJOR) "." VSTR(PROJECT_VERSION_MINOR);

/* ********************* global variables           *************************/


/* ********************* function definitions       *************************/

/*--------------------------------------------------------------------------*\
 
 Function:      void setup(void)
 
 Description:   Configure and initalize µC prior to entering main loop
 
 Parameters:    void
 Returns:       void
 
\*--------------------------------------------------------------------------*/

void setup(void) {
    
}


/*--------------------------------------------------------------------------*\
 
 Function:      main()
 
 Description:   Main program loop
 
 Parameters:    void
 Returns:       void
 
\*--------------------------------------------------------------------------*/

int main(void) {
    
    // setup hardware
    setup();
    
    // main program loop
    while (1) {
        
    }

    return 0;
}
