//Write a recursive function that receives a string and prints its reverse

#include<stdio.h>



void reverse(char *str,int s,int e){
    if(s >=e) {
        printf("%s",str);
        return;
    }
    char temp =str[s];
    str[s] = str[e];
    str[e] = temp;

    reverse(str,s+1,e-1);
}


int main() {
    char str[100];
    scanf("%s", str);

    int len = 0;
    while (str[len] != '\0') len++;

    reverse(str,0,len-1);

    return 0;
}
