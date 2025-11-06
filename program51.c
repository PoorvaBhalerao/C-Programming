//Accept number from user and display count of factors on screen

#include<stdio.h>

int CountFactors(int iNo)
{
    int iCnt = 0, iFrequency = 0;

    if(iNo < 0)         //updator
    {
        iNo = -iNo;
    }

    iCnt = 1;

    for(iCnt = 1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

//time complexitty : O(N/2)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Please enter Number: ");
    scanf("%d", &iValue);

    iRet = CountFactors(iValue);

    printf("Number of factors of %d are %d",iValue,iRet);

    return 0;
}