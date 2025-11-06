//Accept one number and display its digits on screen

#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    printf("--------------------------------------\n");
    printf("Originl value of iNo is %d\n", iNo);

    while(iNo != 0)
    {
        printf("--------------------------------------\n");
        iDigit = iNo % 10;
        printf("iDigit is : %d\n", iDigit);
        iNo = iNo / 10;
        printf("iNo is : %d\n", iNo);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);    

    return 0;
}