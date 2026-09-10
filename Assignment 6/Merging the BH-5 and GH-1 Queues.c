#include <stdio.h>
void merge(int a[], int na, int b[], int nb, int i, int j)
{
    if (i == na && j == nb) {
        return;
    }
    if(i == na) {
        printf("%d ", b[j]);
        merge(a, na, b, nb, i, j+1);
        return;
    }
    if (j == nb) {
        printf("%d ", a[i]);
        merge(a, na, b, nb, i+1, j);
        return;
    }
    if (a[i] <= b[j]) {
        printf("%d ", a[i]);
        merge(a, na, b, nb, i+1, j);
    }
    else {
        printf("%d ", b[j]);
        merge(a, na, b, nb, i, j+1);
    }
}
int main()
{
    int listA[4] = {11, 35, 56, 74};
    int listB[3] = {23, 42, 68};
    printf("BH-5 queue: 11 35 56 74\n");
    printf("GH-1 queue: 23 42 68\n");
    printf("One merged queue: ");
    merge(listA, 4, listB, 3, 0, 0);
    return 0;
}