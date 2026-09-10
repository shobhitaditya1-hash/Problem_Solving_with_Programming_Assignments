#include <stdio.h>
int binarySearch(int roll[], int low, int high, int wanted)
{
    int mid;
    if(low > high)
    {
        return -1;
    }
    mid = (low + high)/2;
    if (roll[mid] == wanted)
    {
        return mid;
    }
    if (wanted < roll[mid])
    {
        return binarySearch(roll, low, mid-1, wanted);
    }
    return binarySearch(roll, mid+1, high, wanted);
}

int main()
{
    int roll[7] = {11, 23, 35, 42, 56, 69, 75};
    int place;
    printf("Sorted roll list: 11, 23, 35, 42, 56, 69, 75");
    printf("Searching for 56\n\n");
    place = binarySearch(roll, 0, 6, 56);
    printf("Found at index %d", place);
    return 0;
}