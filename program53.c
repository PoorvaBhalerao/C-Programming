//Accept number from user and display count of  factors and count of Non-factors of that number on screen

#include<stdio.h>

void CountFactorsNonFactors(int iNo)
{
    int iCnt = 0, iFrequency1 = 0, iFrequency2 = 0;

    if(iNo < 0)         //updator
    {
        iNo = -iNo;
    }

    iCnt = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency1++;
        }
        else
        {
            iFrequency2++;
        }
    }
    printf("Number of Factors are %d\n",iFrequency1);
    printf("Number of Non-Factors are %d\n",iFrequency2);
}

//Time Complexity : O(N)


int main()
{
    int iValue = 0;

    printf("Please enter Number: ");
    scanf("%d", &iValue);

    CountFactorsNonFactors(iValue);

    return 0;
}