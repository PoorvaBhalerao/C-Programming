#include<stdio.h>
#include<stdlib.h>      //for malloc, calloc, realloc and free

int main()
{
    int *ptr = NULL;

    ptr = (int *)realloc(NULL, 10 * sizeof(int));   //if first parameter  is NULL then it behaves like malloc

    //use of memory

    ptr = (int *)realloc(ptr, 0);       //if second parameter is 0, it behaves like free function

    free(ptr);

    return 0;
}