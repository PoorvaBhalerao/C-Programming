// Accept number of elements from user and Count number of even elements.
#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
    }
    return iCount;
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

    iRet = CountEven(ptr, iLength);

    printf("Count of Even Elements is: %d\n",iRet);

    free(ptr);

    return 0;
}

