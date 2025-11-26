//Accept file name from user and Create file .

#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char FileName[20];

    printf("Enter the name of file that you want to create:\t");
    scanf("%s",FileName);

    fd = creat(FileName, 0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("FIle is Successfully created with fd: %d\n", fd);
    }

    return 0;
}