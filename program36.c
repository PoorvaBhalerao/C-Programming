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
    
    Display(7);

    return 0;
}