//Write a recursive function to simulate the problem tower of Hanoi

#include <stdio.h>

/*
    1. If there's only one disk, move it directly from source to destination.
    2. Move the top (n-1) disks from source to the temporary (auxiliary) rod.
    3. Move the largest (nth) disk from source to destination.
    4. Finally, move the (n-1) disks from the temporary rod to the destination rod.
*/
void towerOfHanoi(int n, char src, char temp, char dest) {


    if (n == 1) {
        printf("Move disk 1  %c -> %c\n", src, dest);
        return;
    }

    towerOfHanoi(n - 1, src, dest, temp);
    printf("Move disk %d  %c -> %c\n", n, src, dest);
    towerOfHanoi(n - 1, temp, src, dest);
}


int main() {
    int n;
    scanf("%d", &n);

    towerOfHanoi(n, 'A', 'B', 'C'); // A = src, B = inter, C = dest
    return 0;
}
