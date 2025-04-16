/*
Write a function simulating the following library functions:
    a. strlen
    b. strcat
    c. strstr
*/


#include <stdio.h>
#include <stdlib.h>

#define SIZE 100


int strlen(char *str){
    int len = 0;
    while (str[len] != '\0') len++;
    return len ;
}

char *strcat(char *str1, char *str2){
    int size_of_1 = strlen(str1);
    int size_of_2 = strlen(str2);

    char *cat = malloc(size_of_1+size_of_2+1);

    if (cat == NULL) return NULL;  

    for(int i=0;i<size_of_1;++i){
        cat[i]=str1[i];
    }

    for(int i=0;i<size_of_2;++i){
        cat[size_of_1+i]=str2[i];
    }

    cat[size_of_1+size_of_2] = '\0';

    return cat;
}

char *strstr(char *str,char *sub){
    if (!*sub) return str;

    for (; *str; str++) {
        char *s = str, *p = sub;

        while (*s && *p && *s == *p) {
            ++s;
            ++p;
        }

        if (!*p) return str;
    }

    return NULL;
}


int main(){
    char *str1 = "Sajid";
    char *str2 = " Al Nahian";
    char *needle = "ahi";

    printf("%d\n",strlen(str1));
    printf("%d\n",strlen(str2));

    char *catted = strcat(str1, str2);
    if (catted) {
        printf("%s\n", catted);
        free(catted);  
    }

    char *getfromstr = strstr(str2,needle);
    if(getfromstr != NULL){
        printf("%s",getfromstr);
    }


}