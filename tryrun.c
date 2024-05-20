#include<stdio.h>

struct Demo
{
    double d;
    int i;
    int n;
    char ch;
    char ch1;
    char ch2;
    char ch3;
    char ch4;
    float f;
};

int main()
{
    struct Demo obj;
    printf("Size of struct demo is: %d",sizeof(struct Demo));
    printf("Size of struct object is: %d",sizeof(obj));
}