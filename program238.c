// Accept string from user and convert the string into Capital letters.

#include<stdio.h>

void struprX(char str[])
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))     
        {
            *str = *str - 32;
        }
        
        str++;
    }   
}

int main()

{
    char Arr[50] = {'\0'};

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);                               
    
    struprX(Arr);

    printf("Updated String is: %s\n", Arr);

    return 0;
}