// Display 5    4   3   2   1   0


#include<stdio.h>

void Display()
{
    int iCnt = 0;

    for(iCnt = 5; iCnt>=0; iCnt--)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    
    Display();

    return 0;
}