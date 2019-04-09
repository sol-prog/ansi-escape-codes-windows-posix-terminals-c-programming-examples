#include <stdio.h>
#include "ansi_escapes.h"

int main(void) {
    setupConsole();
    puts("\x1b[31m\x1b[44mHello, World");
    restoreConsole();
}
