#include <stdio.h>
void printReverse(int n)
{
    if(n == 0)
        return;
    printf("%d", n %10);
    printReverse(n / 10);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The reverse of the number is: ");
    printReverse(n);
    return 0;
}