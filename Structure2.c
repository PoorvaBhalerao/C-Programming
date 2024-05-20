#include<stdio.h>

struct Marvellous
{
    int no;
    float f;
    int i;
};

int main()
{
    struct Marvellous mobj;

    struct Marvellous *ptr = &mobj;

    ptr -> no = 11;
    ptr -> f = 90.99;
    ptr -> i = 21;

    printf("%d\n", ptr->no); //11  or
    printf("%d\n",mobj.no);  //11

    printf("%d\n", sizeof(mobj));   //12

    return 0;
}