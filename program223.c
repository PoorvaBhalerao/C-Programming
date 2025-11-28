// Accept string from user and accept one character from user and count how many times character occures from that string

#include<stdio.h>

int CountOccurence(char str[], char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }   
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);                    
    
    iRet = CountOccurence(Arr, 'd');

    printf("Count of character from string is: %d\n",iRet);

    return 0;
}