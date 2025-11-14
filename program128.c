// Accept number of elements from user and Display Summation of elements.
#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements: \n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));     
    if(NULL == ptr)                             
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the Elements:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Summation(ptr, iLength);

    printf("Summation of all the elements is: %d\n",iRet);

    free(ptr);

    return 0;
}

