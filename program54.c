//Accept number from user and Check Whether it is Prime or Not

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0, iFrequency = 0;

    if(iNo < 0)         //updator
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency++;
        }
    }
    
    if(iFrequency == 0)         // No factors
    {
        return true;
    }
    else                        // At least one Factor
    {
        return false;
    }
}

//time complexitty : O(N/2)

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Please enter Number: ");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is Prime Number", iValue);
    }
    else
    {
        printf("%d is not Prime Number", iValue);
    }
    

    return 0;
}