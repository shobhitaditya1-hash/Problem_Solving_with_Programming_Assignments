#include <stdio.h>
int cumulative(int n)
{
    if (n == 1){
        printf("Day 1: Spent 1, running total: 1\n");
        return 1;
    }
    int sum = cumulative(n - 1) + n;
    printf("Day %d: Spent %d, running total: %d\n", n, n, sum);
    return sum;
}

int main()
{
    int days;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    int total = cumulative(days);
    printf("Total spent over %d days: %d\n", days, total);
    return 0;
}