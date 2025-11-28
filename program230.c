// Accept string from user and count number of Capital  as well as small characters

#include<stdio.h>

void CountAll(char str[])
{
    int iCountSmall = 0, iCountCapital = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))           
        {
            iCountCapital++;
        }
        else
        {
            iCountSmall++;
        }
        str++;
    }   
    
    printf("Count of capital characters is: %d\n", iCountCapital);
    printf("Count of small characters is: %d\n", iCountSmall);          // only else condition is written 
                                                                        // so for small characters it will count space and other symbols alse


}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);                               
    
    CountAll(Arr);

    return 0;
}