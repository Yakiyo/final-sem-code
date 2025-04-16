/*
19. Write a program, that reads 4 integer values separated by – symbol from each
line of a text file and prints the sum of the numbers for each line.

Input file:
    1-2-3-3
    2-2-2-2
    3-3-3-3
Output:
    9
    8
    12
*/



#include <stdio.h>

int main() {
    FILE *file = fopen("G:\\CodeWorks\\c_stuffs\\data\\19.in", "r");
    int num1, num2, num3, num4;
    
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    
    while (fscanf(file, "%d-%d-%d-%d\n", &num1, &num2, &num3, &num4) == 4) {
        int sum = num1 + num2 + num3 + num4;
        printf("%d\n", sum);
    }

    fclose(file);
    return 0;
}
