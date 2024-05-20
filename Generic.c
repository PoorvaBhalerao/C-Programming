#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 90.99;
    double d = 90.56789;

    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    void *vp = NULL;    //void or generic pointer which can hold address of any datatype.

    printf("%c\n",*cp); //A
    printf("%d\n",*ip); //11
    printf("%f\n",*fp); //90.99
    printf("%f\n\n",*dp); //90.56789

    vp = &ch;
    //printf("%c\n",*vp); //error vp pointer is unable to predict how much bytes he want to fetch
    printf("%c\n",*(char*)vp);  //A.....it is typecasting void pointer is typecast to char for this instance
    vp = &i;
    printf("%d\n",*(int*)vp);   //11....void pointer is typecast to integer.
    vp = &f;
    printf("%f\n",*(float*)vp); //90.99....void pointer is typecast to float.
    vp = &d;
    printf("%f\n",*(double*)vp); //90.56789....void pointer is typecast to double.

    return 0;
}