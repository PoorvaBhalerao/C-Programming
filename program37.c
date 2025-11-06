// Accept number from user and display 1 to that number on screen


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Please enter frequency: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}