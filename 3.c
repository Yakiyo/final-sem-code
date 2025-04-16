/*
Given an array of strings, find the sum of ASCII values of all the lower-case
letters for each string.

Input Strings:
    helloABC
    World
    abc123
Output Strings:
    helloABC = 532
    World = 433
    abc123 = 294
*/

#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 1000
#define MAX_LENGTH 101



void print_ascii(char arr[][MAX_LENGTH], int n){
    for(int i =0;i<n;++i){
        int sum =0;
        for(int j =0;j<strlen(arr[i]);++j){
            if(arr[i][j]>='a' && arr[i][j]<='z'){
                sum+=arr[i][j];
            }
        }
        printf("%s = %d\n", arr[i], sum);
    }
}


int main() {
    char strings[MAX_STRINGS][MAX_LENGTH];
    int n = 0;

    while (n < MAX_STRINGS && scanf("%s", strings[n]) == 1) {
        ++n;
    }

    print_ascii(strings, n);
    return 0;
}
