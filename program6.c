//write a program to Accept two numbers from user and display addition

#include<stdio.h>

int Addition(int a, int b)
{
    int sum = 0;
    sum = a + b;    // Business Logic
    return sum;
}

int main()
{
    int i= 0, j = 0, iAns = 0;

    printf("Enter First number: \n");
    scanf("%d",&i);

    printf("Enter Second number: \n");
    scanf("%d",&j);

    iAns = Addition(i , j);
    
    printf("Addition is : %d\n",iAns);

    return 0;
}