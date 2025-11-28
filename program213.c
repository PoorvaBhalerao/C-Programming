//Accept String from user and Display it.

#include<stdio.h>

int main()
{
    char Name[50] = {'\0'};

    printf("Enter Your Name:\n");
    scanf("%[^'\n']s",Name);                // Regular expression

    printf("Hello, %s\n", Name);        
    
    return 0;
}