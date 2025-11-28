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
    char cValue = '\0';

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);  
    
    printf("Enter a character:\n");
    scanf(" %c", &cValue);              //Issue solved by adding single space before %c
                                        //applicable for all OS
    
    iRet = CountOccurence(Arr, cValue);

    printf("Count of '%c' from string is: %d\n",cValue,iRet);

    return 0;
}