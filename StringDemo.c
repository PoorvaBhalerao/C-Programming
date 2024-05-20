#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[] = "Hello";
    char Brr[] = {'H', 'e', 'l', 'l', 'o','\0'};

    printf("%s\n", Arr);
    printf("%s\n", Brr);

    printf("%d\n", strlen(Arr));    //string length.. ehllo is of 5 length
    printf("%d\n", strlen(Brr));    // if we use sizeof() operator the n ans is 6 because it calculates memory allocated('\0' is included in calculation)


    return 0;
}