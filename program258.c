// Accept two string from user and (both the strings are occupied) copy content of first string to second string without loosing data which is already there in second string.
// copy the contents from first string from last page of second string.

#include<stdio.h>

void strcateX(char *src, char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }

    //now *dest is at '\0'

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';       //*dest = *src..... now *src is also ar '\0'
                        // because '\0' is not copied

}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter source string:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter destination string:\n");
    scanf(" %[^'\n']s",Brr);

    strcateX(Arr, Brr);

    printf("updated destination string is: %s\n",Brr);

    return 0;
}