#include <stdio.h>
int main() {
    int booking[3][4] = {{5, 8, 3, 6}, {4, 7, 9, 2}, {6, 5, 8, 7}};
    char *days[3] = {"Monday", "Wednesday", "Friday"};
    int i, j, rowTotal, colTotal;
    printf("Total bookings per day:\n");
    for(i=0; i<3; i++) {
        rowTotal = 0;
        for(j=0; j<4; j++) {
            rowTotal = rowTotal + booking[i][j];
        }
        printf(" %-10s : %d\n", days[i], rowTotal);
    }
    printf("\nTotal bookings per slot (column-wise sum): \n");
    for(j=0; j< 4; j++) {
        colTotal = 0;
        for(i = 0; i<3; i++) {
            colTotal = colTotal + booking[i][j];
        }
        printf(" SLot %d : %d\n", j, colTotal);
    }
    return 0;
}