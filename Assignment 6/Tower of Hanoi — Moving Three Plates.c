#include <stdio.h>
void hanoi(int disks, char from, char to, char spare)
{
    if(disks == 1)
    {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    hanoi(disks - 1, from, spare, to);
    printf("Move disk %d from %c to %c\n", disks, from, to);
    hanoi(disks - 1, spare, to, from);
}

int main()
{
    printf("Three plates to move from stand A to stand C, using B\n");
    hanoi(3, 'A', 'C', 'B');
    printf("\nTotal moves for 3 disks = 7");
    return 0;
}