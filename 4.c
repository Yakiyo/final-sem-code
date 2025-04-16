/*
Given a 2D integer array, count how many odd numbers are present in each row

Input Array:
    1 2 3
    2 2 2
    3 3 3
Output:
    Row 1: 2
    Row 2: 0
    Row 3: 3
*/

#include <stdio.h>


int main() {
    int rows, cols;

    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i=0;i<rows;++i){
        int count =0;
        for (int j=0;j<cols;++j){
            if(arr[i][j] & 1){
                count++;
            }
        }
        printf("Row %d: %d\n", i+1, count);
    }

}