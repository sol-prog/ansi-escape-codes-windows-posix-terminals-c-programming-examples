#include <stdio.h>
#include "ansi_escapes.h"

int main(void) {
    setupConsole();
    
    clearScreen();
    moveTo(1,1);

    setTextColor(GREEN_TXT);
    setBackgroundColor(YELLOW_BKG);

    puts("Text line 1");
    printf("Text line 2");
    saveCursorPosition();
    printf("\n");
    puts("Text line 3");

    restoreCursorPosition();

    clearLineToLeft();

    puts("Replacement for second line");

    moveDown(3);

    moveRight(5);

    setTextColor(MAGENTA_TXT);

    puts("5 positions to right ...");

    moveDown(1);
    
    restoreConsole();
}
