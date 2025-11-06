//Accept number from user and display its factors.
//Input: 12
//Output:1  2  3   4   6   

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    iCnt = 1;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

//time complexity: O(N)

int main()
{
    int iValue = 0;

    printf("Please enter Number: ");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}