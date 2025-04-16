/*
Given an array of strings, print the strings sorted in the ascending order based on
their length.

Input Strings:
    helloABC
    World
    abc123
Output Strings:
    World
    abc123
    helloABC
*/

#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 1000
#define MAX_LENGTH 101

//Bubble Sort
void sort(char arr[][MAX_LENGTH], int n) {
    char temp[MAX_LENGTH];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char strings[MAX_STRINGS][MAX_LENGTH];

    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    sort(strings, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

}