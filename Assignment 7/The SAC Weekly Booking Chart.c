#include <stdio.h>
 int main() {
    int booking[3][4] = {
        {5, 8, 3, 6},
        {4, 7, 9, 2},
        {6, 5, 8, 7}
    };
    char *days[3] = {"Monday", "Wednesday", "Friday"};
    int i, j;
    printf("SAC Weekly Booking Char:\n");
    printf("%-10s%6s%6s%6s%6s\n", "Day", "4-5pm", "5-6pm", "6-7pm", "7-8pm");
    for(i=0; i<3; i++) {
        printf("%-10s", days[i]);
        for(j=0; j<4; j++) {
            printf("%6d", booking[i][j]);
        }
        printf("\n");
    }
    return 0;
 }