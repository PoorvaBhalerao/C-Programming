#include<stdio.h>

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
    struct Student Pooja;

    printf("Size of object is: %d\n", sizeof(Amit));  //20 because of char datatype
    
    Amit.RollNo = 11;
    Amit.division = 'A';
    Amit.marks = 90.89;
    Amit.age = 19;
    Amit.salary =21000;

    Pooja.RollNo =21;
    Pooja.division = 'D';
    Pooja.marks = 93.67;
    Pooja.age = 17;
    Pooja.salary = 5000;

    printf("Age of Amit is: %d\n", Amit.age);
    printf("Age of Pooja is: %d\n", Pooja.age);

    printf("Salary of Amit is: %d\n", Amit.salary);
    printf("Age of Pooja is: %d\n", Pooja.salary);
    
    
    


    return 0;
}