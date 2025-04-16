/*
Given the values of the pixels of an image as a 2D integer array, change the
values of each pixel by taking the average of all surrounding pixels.
*/


#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int image[rows][cols];
    int output[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &image[i][j]);
        }
    }

    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int sum = 0, count = 0;

            for (int d = 0; d < 8; d++) {
                int ni = i + dx[d];
                int nj = j + dy[d];

                if (ni >= 0 && ni < rows && nj >= 0 && nj < cols) {
                    sum += image[ni][nj];
                    count++;
                }
            }

            if (count > 0)
                output[i][j] = sum / count;
            else
                /*
                    this is for 1x1 images 
                    where the pixel has no surrounding pixels
                */
                output[i][j] = image[i][j]; 
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", output[i][j]);
        }
        printf("\n");
    }

    return 0;
}
