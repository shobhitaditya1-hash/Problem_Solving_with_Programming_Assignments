#include <stdio.h>
int sumSquares(int n) {
    if(n == 0) {
        return 0;
    } else {
        return n * n + sumSquares(n - 1);
    }
}

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    if(number < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int result = sumSquares(number);
        printf("The sum of squares from 1 to %d is: %d\n", number, result);
    }
    
    return 0;
}