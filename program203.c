//Accept file name from user and open that file and write into that file.

#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet = 0;
    char FileName[20];
    char Data[] = "India is my Country";

    printf("Enter the name of file:\n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    iRet = write(fd, Data, 11);

    printf("%d bytes gets successfully written\n", iRet);

    close(fd);  

    return 0;
}