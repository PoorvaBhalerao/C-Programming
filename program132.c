// Accept number of elements from user and Perform its Average.....typecasting done due to this output is correct
#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;
    float fAvg = 0.0f;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    fAvg = (float)iSum / (float)iSize;          
    return fAvg;            
}

int main()
{
    int iLength = 0, iCnt = 0;
    float fRet = 0.0f;
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

    fRet = Average(ptr, iLength);

    printf("Average is: %f\n",fRet);

    free(ptr);

    return 0;
}

