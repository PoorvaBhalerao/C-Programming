#include<stdio.h>
extern int i;
extern int j;
extern int arr[4];
extern void fun();

void gun();

int main()
{
    printf("Value of i is %d\n:", i);
    
    printf("Value of j is %d\n:", j);

    j = 51;

    
    printf("Value of j is %d\n:", j);

    printf("Value of arr is %d\n:", arr[0]);

    fun();
    gun();

    return 0;
}

int i = 21;

void gun()
{
    printf("\nInside gun");


}


