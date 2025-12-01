// Accept two string from user and copy content of first string to second string.

#include<stdio.h>

void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';       // because '\0' is not copied

}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter first string:\n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr, Brr);

    printf("Copied string is: %s\n",Brr);

    return 0;
}