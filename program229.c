// Accept string from user and count number of Capital characters (a to z)

#include<stdio.h>

int CountCapital(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))           
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
    
    iRet = CountCapital(Arr);

    printf("Count of capital characters from string is: %d\n",iRet);

    return 0;
}