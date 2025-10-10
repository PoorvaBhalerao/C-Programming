//write a program to Accept two numbers from user and display addition

#include<stdio.h>

int AdditionTwoNumbers(int iValue1, int iValue2)
{
    int iSum = 0;
    iSum = iValue1 + iValue2;    // Business Logic
    return iSum;
}

int main()
{
    int iNo1 = 0, iNo2 = 0, iRet = 0;

    printf("Enter First number: \n");
    scanf("%d",&iNo1);

    printf("Enter Second number: \n");
    scanf("%d",&iNo2);

    iRet = AdditionTwoNumbers(iNo1 , iNo2);
    
    printf("Addition is : %d\n",iRet);

    return 0;
}