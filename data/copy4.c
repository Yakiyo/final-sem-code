#include <stdio.h>

int main() {
    FILE *src = fopen(__FILE__, "r");
    FILE *dest = fopen("G:\\CodeWorks\\c_stuffs\\data\\copy.c", "w");
    char ch;

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);
    return 0;
}
