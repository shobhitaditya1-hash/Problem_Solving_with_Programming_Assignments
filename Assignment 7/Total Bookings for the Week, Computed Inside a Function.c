#include <stdio.h>
#define COLS 4
int weeklyTotal(int arr[][COLS], int rows) {
    int i, j, total = 0;
    for(i=0; i< rows; i++) {
        for(j=0; j<COLS; j++) {
            total = total + arr[i][j];
        }
    }
    return total;
}
int main() {
    int booking[3][COLS] = {{5, 8, 3, 6}, {4, 7, 9, 2}, {6, 5, 8, 7}};
    printf("SAC weekly grand total = %d\n", weeklyTotal(booking, 3));
    return 0;
}