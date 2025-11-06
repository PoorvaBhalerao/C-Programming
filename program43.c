//Accept two numbers from user and check whether second number is divisible by first number or not
//Input:12  2       Output: True
//Input:12  3       Output: True
//Input:17  5       Output: False
//Input:13  2       Output: False

#include<stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Please enter First Number: ");
    scanf("%d", &iValue1);

    printf("Please enter Second Number: ");
    scanf("%d", &iValue2);

    if((iValue1 % iValue2)== 0)
    {
        printf("It is completely Divisible\n");
    }
    else
    {
        printf("It is not Divisible\n");
    }
    
    return 0;
}