#include<stdio.h>
#include<stdlib.h>      //for malloc, calloc, realloc and free

int main()
{
    int Arr[5];     //static memory allocation
    int Size = 0;
    int *ptr = NULL;

    printf("Enter number of elements:   \n");
    scanf("%d",&Size);

    ptr = (int *)calloc(Size , sizeof(int));
    //  = (int *)calloc(12 * 500ml);.....just example of milk 12 packets of 500ml means 6 ltr
    //  = (int *)malloc(6000ml);....if it is malloc directly we say 6000ml means 6 ltr

    //  Use the memory

    free(ptr);

    return 0;
}