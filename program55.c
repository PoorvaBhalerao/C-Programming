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
            break;
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

/*
Time Complexity for Prime is O(N/2)
Time Complexity for Non Prime Number is either O(1) or O(2)
*/