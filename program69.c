//Accept one number and count number of digits of that number.

#include<stdio.h>

int CountDigits(int iNo)
{
    //int iDigit = 0;
    int iCount = 0;

    if(iNo == 0)
    {
        return 1;
    }

    while(iNo != 0)
    {
        //iDigit = iNo % 10;        not required because not usable
        iCount++;
        iNo = iNo / 10;
        
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);  
    
    printf("Count of Digits of Number is: %d\n",iRet);

    return 0;
}