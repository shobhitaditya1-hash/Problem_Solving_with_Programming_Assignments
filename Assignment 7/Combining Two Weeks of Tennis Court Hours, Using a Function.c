#include <stdio.h>
#define ROWS 2
#define COLS 3
void matrixAdd(int a[][COLS], int b[][COLS], int result[][COLS], int rows) {
    int i, j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < COLS; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}
void printGrid(int m[][COLS], int rows) {
    int i, j;
    for(i = 0; i < rows; i++) {
        printf("Court %d: ", i+1);
        for(j = 0; j < COLS; j++) {
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int week1[ROWS][COLS]={{3, 2, 4}, {1, 5, 2}};
    int week2[ROWS][COLS]={{2, 3, 1}, {4, 1, 3}};
    int total[ROWS][COLS];
    matrixAdd(week1, week2, total, ROWS);
    printf("Tennis Court usage, Week 1 + Week 2 (hours):\n");
    printGrid(total, ROWS);
    return 0;
}