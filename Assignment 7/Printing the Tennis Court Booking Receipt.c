#include <stdio.h>
struct Receipt {
    int bookingId;
    char player[20];
    int court;
    int hour;
};
void printReceipt(struct Receipt r) {
    printf("-----Tennis Court Booking Receipt----\n");
    printf("Booking ID: %d\n", r.bookingId);
    printf("Player: %s\n", r.player);
    printf("Court: %d\n", r.court);
    printf("Hour: %d:00\n", r.hour);
}
int main()
{
    struct Receipt r1 = {2024, "Shobhit Aditya", 1, 17};
    printReceipt(r1);
    return 0;
}