// Accept string from user and reverse display the string (in place reverse)
//input: abcd
//output: dcba

#include<stdio.h>

void ReverseDisplay(char *str)
{
    char *temp = str;

    while(*str != '\0')
    {
        str++;
    }
    
    while(str >= temp)
    {
        printf("%c", *str);         // *str is at '\0'
        str--;                      // so to display reversely one place backwards
    }
    printf("\n");
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    ReverseDisplay(Arr);

    return 0;
}