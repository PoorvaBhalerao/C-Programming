//Accept number from user and display its non factors.
//Input: 12
//Output:5,7,8,9,10,11  

#include<stdio.h>

void DisplayNonFactors(int iNo)
{
    int iCnt = 0;

    iCnt = 1;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
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

    DisplayNonFactors(iValue);

    return 0;
}