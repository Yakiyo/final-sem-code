#include <stdio.h>

int main() {
    /*
        __FILE__ is a predefined macro that expands to the
         full path of the current source file
    */


    FILE *src = fopen(__FILE__, "r");
    FILE *dest = fopen("G:\\CodeWorks\\c_stuffs\\data\\copy.c", "w");
    char ch;

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);
    return 0;
}
