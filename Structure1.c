#include<stdio.h>

struct Demo
{
    int no;  // here we should not initialise the values because of no memory allocated.
    float f;
    double d;
};


int main()
{
    struct Demo obj;   //actual memory allocated here

    obj.no = 11;
    obj.f = 90.99;
    obj.d = 89.9999;

    printf("%d\n", obj.no);
    printf("%f\n", obj.f);
    printf("%f\n", obj.d);

    return 0;
}