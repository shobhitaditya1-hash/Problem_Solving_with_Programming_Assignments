#include <stdio.h>
int countZeroes(int n) {
    if (n == 0){
        return 0;
    }
    if (n % 10 == 0) {
        return 1 + countZeroes(n / 10);
    } else {
        return countZeroes(n / 10);
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int zeroCount = countZeroes(number);
    printf("Number of zeroes in %d is: %d\n", number, zeroCount);
    return 0;
}