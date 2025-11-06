//Accept number from user and display count of NON- factors of that number on screen

#include<stdio.h>

int CountNonFactors(int iNo)
{
    int iCnt = 0, iFrequency = 0;

    if(iNo < 0)         //updator
    {
        iNo = -iNo;
    }

    iCnt = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}
//Time Complexity : O(N)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Please enter Number: ");
    scanf("%d", &iValue);

    iRet = CountNonFactors(iValue);

    printf("Number of Non-factors of %d are %d",iValue,iRet);

    return 0;
}