//Array using call by address 
// Display elements of array.

#include<stdio.h>

void Display(int *Brr)  
{
    int iCnt = 0;

    for(iCnt = 0; iCnt< 4; iCnt++, Brr++)      
    {
        printf("%d\n",*Brr);    
    
    }
}

int main()
{
    int Arr[] = {10,20,30,40};
    
    Display(Arr);

    return 0;
}