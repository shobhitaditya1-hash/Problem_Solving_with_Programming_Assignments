#include <stdio.h>
struct Student
{
    int roll;
    char name[20];
    float cgpa;
};
int main()
{
    struct Student s1 = {72, "Shobhit Aditya", 9.6};
    printf("*****CC3 Student ID Card*****\n");
    printf("Roll Number: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("CGPA: %.1f\n", s1.cgpa);
    return 0;
}