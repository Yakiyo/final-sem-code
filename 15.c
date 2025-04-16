//Write a program that reads a C program from a folder, and creates 5 copies of it
#include <stdio.h>

int main() {
    char ch, name[100];
    
    for (int i = 1; i <= 5; i++) {
        FILE *src = fopen("G:\\CodeWorks\\c_stuffs\\data\\copy.c", "r");
        
        /*
            sprintf() 
            formats and stores a series of characters and values into a string.

            Params:
                - char *str: A pointer to the buffer where the resulting string is stored.
                - const char *format: A format string that specifies
                 how subsequent arguments are converted to a string.
                - ...: Additional arguments corresponding to the format specifiers in the format string.

            Return:
                - The total number of characters written to the string (excluding the  terminator).
                -  returns negative on error.
        */

        sprintf(name, "G:\\CodeWorks\\c_stuffs\\data\\copy%d.c", i);
        
        FILE *dest = fopen(name, "w");

        
        while ((ch = fgetc(src)) != EOF) {
            fputc(ch, dest);
        }
        
        fclose(src);
        fclose(dest);
        
    }
    return 0;
}