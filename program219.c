// Accept string from user and count the occurence of 'A' from that string

#include<stdio.h>

int Count(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'A')
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
    
    iRet = Count(Arr);

    printf("Count of 'A' is: %d\n",iRet);

    return 0;
}