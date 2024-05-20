#include<stdio.h>

#pragma pack(1)
struct Student
{
    int RollNo;
    char division;
    int age;
    float marks;
    int salary;    
};

int main()
{
    struct Student Amit;
    
    printf("Size of object is: %d\n", sizeof(Amit));  //17 due to above #pragma sentece

    return 0;
}