/*
Write a recursive function that receives a string, and checks whether it is
palindrome or not
*/

#include <stdio.h>

int check(char *str, int s, int e) {
    if (s >= e) return 1;
    if (str[s] != str[e]) return 0;
    return check(str, s + 1, e - 1);
}

int main() {
    char str[100];
    scanf("%s", str);

    int len = 0;
    while (str[len] != '\0') len++;

    printf("%d",check(str,0,len-1));
    return 0;
}
