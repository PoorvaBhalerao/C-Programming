//write a program to Accept two numbers from user and display addition

#include<stdio.h>

int main()
{
    int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter First number: \n");
    scanf("%d",&iNo1);

    printf("Enter Second number: \n");
    scanf("%d",&iNo2);

    iAns = iNo1 + iNo2; // Business Logic
    
    printf("Addition is : %d\n",iAns);

    return 0;
}