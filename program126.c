// Accept number of elemtns from user and Display elements of array.
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Entered elements are: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements: \n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));     
    if(NULL == ptr)                             // Industrial way of coding 
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the Elements:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr, iLength);

    free(ptr);

    return 0;
}

