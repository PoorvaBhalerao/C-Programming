//Accept two numbers from user and check whether second number is divisible by first number or not
//Input:12  2       Output: True
//Input:12  3       Output: True
//Input:17  5       Output: False
//Input:13  2       Output: False

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo1, int iNo2)
{
    if((iNo1 % iNo2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Please enter First Number: ");
    scanf("%d", &iValue1);

    printf("Please enter Second Number: ");
    scanf("%d", &iValue2);

    bRet = CheckDivisible(iValue1, iValue2);

    if(bRet == true)
    {
        printf("It is completely Divisible\n");
    }
    else
    {
        printf("It is not Divisible\n");
    }
    
    return 0;
}