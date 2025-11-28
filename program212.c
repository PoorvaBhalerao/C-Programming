//Accept String from user and Display it.

#include<stdio.h>

int main()
{
    char Name[50] = {'\0'};

    printf("Enter Your Name:\n");
    scanf("%s",Name);

    printf("Hello, %s\n", Name);        // After space it will not display sring
    
    return 0;
}