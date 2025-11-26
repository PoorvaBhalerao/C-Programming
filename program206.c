//Accept file name from user and open that file and read that file.

#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet = 0;
    char FileName[20];
    char Data[50];

    printf("Enter the name of file:\n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    iRet = read(fd, Data, 7);

    printf("Data from file: %s\n",Data);            // output contains garbage 

    printf("%d bytes gets successfully read\n", iRet);

    close(fd);  

    return 0;
}