// Accept string from user and count number of digits from string

#include<stdio.h>

void CountDigits(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 48) && (*str <= 57))   // ASCII value of '0' is 48 and '9' is 57        
        {
            iCount++;
        }
        
        str++;
    }   
        
    printf("Number of Digits are: %d\n", iCount);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);                               
    
    CountDigits(Arr);

    return 0;
}