#include<stdio.h>

int main()
{
    int no =10;
    int *p = NULL;

    p = &no;

    printf("%d\t",no);
    printf("%d\t",*p);

    *p =11;
    printf("%d\t",no);
    printf("%d\t",*p);


    return 0;
}