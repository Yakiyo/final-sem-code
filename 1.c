/*
Write a function that receives name of 100 people (where each name is at most
100 characters long). The function prints the valid names only. A name is
considered as invalid, if it contains any other characters except lowercase and
uppercase alphabets.
*/



#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_NAMES 100
#define MAX_NAME_LENGTH 100


void print_valid_names(char names[][MAX_NAME_LENGTH + 1], int num_names) {
    for (int i = 0; i < num_names; i++) {
        int is_valid = 1;
        for (int j = 0; names[i][j] != '\0'; j++) {
            if (!isalpha(names[i][j])) {
                is_valid = 0;
                break;
            }
        }
        
        if (is_valid) {
            printf("%s\n", names[i]);
        }
    }
}


int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH + 1];
    int count = 0;
    
    while (count < MAX_NAMES && fgets(names[count], MAX_NAME_LENGTH + 1, stdin)) {

        size_t len = strlen(names[count]);
        if (len > 0 && names[count][len-1] == '\n') {
            names[count][len-1] = '\0';
        }
        
        if (strlen(names[count]) == 0) {
            break;
        }
        
        count++;
    }
    
    print_valid_names(names, count);
    
    return 0;
}
