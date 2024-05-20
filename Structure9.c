#include<stdio.h>

struct Demo
{
    int No;
    int Data;
};

int main()
{
   struct Demo obj;

   struct Demo *ptr = &obj;

    obj.No = 11;  //. is direct acessing operator

    ptr -> Data = 21; // -> is indirect accessing opewrator

    return 0;
}