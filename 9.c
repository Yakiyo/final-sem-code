//Write a recursive function that receives an integer and returns the sum of its digits

#include <stdio.h>


int sum(int n){
    if(!n) return 0;
    return(n%10 + sum(n/10));
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
}