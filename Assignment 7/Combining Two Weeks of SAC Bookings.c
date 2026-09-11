#include <stdio.h>
int main() {
    int week1[3][4]={{5, 8, 3, 6}, {4, 7, 9, 2}, {6, 5, 8, 7}};
    int week2[3][4]={{2, 1, 4, 3}, {3, 2, 1, 5}, {1, 4, 2, 3}};
    int total[3][4];
    char *days[3] = {"Monday", "Wednesday", "Friday"};
    int i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            total[i][j] = week1[i][j] + week2[i][j];
        }
    }
    printf("Combined two-week SAC Booking Chart: \n");
    for(i = 0; i < 3; i++) {
        printf("%-10s", days[i]);
        for(j = 0; j < 4; j++) {
            printf("%4d" , total[i][j]);
        }
        printf("\n");
    }
    return 0;
}