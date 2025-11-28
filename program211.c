//Displaying the String

#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[] = "Hello";

    printf("%s\n", Arr);            //Hello
    printf("%ld\n",sizeof(Arr));      // 6    number of bytes
    printf("%d\n",strlen(Arr));       // 5    number of letters till '\0'('\0' is not counted)

    return 0;
}