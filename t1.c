#include <stdio.h>

int main(void) {
    // Red text and blue background
    puts("\x1b[31m\x1b[44mHello, World");
    // Reset colors to defaults
    printf("\x1b[0m");
}
