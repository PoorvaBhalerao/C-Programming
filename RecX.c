#include<stdio.h>

void Display(int No)        //Callee
{
    static int iCnt = 0;            //static storage class is used to preserve value accross fun

    if(iCnt < No)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
        Display(No);        //Recursive call
    }
}

int main()      // Caller
{
    Display(3);

    return 0;
}