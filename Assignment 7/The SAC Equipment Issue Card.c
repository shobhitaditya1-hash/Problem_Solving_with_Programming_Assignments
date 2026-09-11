#include <stdio.h>
typedef struct {
    char item[20];
    int quantity;
    int studentRoll;
} IssueCard;

int main()
{
    IssueCard card1 = {"Badminton Racket", 2, 101};
    IssueCard card2 = {"Chess Clock", 1, 103};
    printf("SAC Equipment Issue Cards\n");
    printf("%-20s %3s %5s\n", "Item", "Qty", "Roll");
    printf("%-20s %3d %5d\n", card1.item, card1.quantity, card1.studentRoll);
    printf("%-20s %3d %5d\n", card2.item, card2.quantity, card2.studentRoll);
    return 0;
}