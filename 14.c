/*
Write a function that receives two 2D integer array of same dimension and
creates a new array by picking the largest value between the same locations of
both arrays. The function will return a reference to the new array.


->Added for testing 

Input:
3
1 2 3
4 5 6
7 8 9

9 8 7
6 5 4
3 2 1

Output:
9 8 7 
6 5 6 
7 8 9 

*/



#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

void get_new_arr(int m1[SIZE][SIZE], int m2[SIZE][SIZE], int newarr[SIZE][SIZE], int n) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            newarr[i][j] = m1[i][j] >= m2[i][j] ? m1[i][j] : m2[i][j]; //use the max() fn instead
}

int main() {
    int m1[SIZE][SIZE], m2[SIZE][SIZE], newarr[SIZE][SIZE];
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &m1[i][j]);

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &m2[i][j]);

    get_new_arr(m1, m2, newarr, n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            printf("%d ", newarr[i][j]);
        printf("\n");
    }

    return 0;
}
