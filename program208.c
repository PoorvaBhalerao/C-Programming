//Accept file name from user and open that file and read that file.

#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet = 0;
    char FileName[20];
    char Data[50] = {'\0'};

    printf("Enter the name of file:\n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    iRet = read(fd, Data, 7);

    printf("%d bytes gets successfully read\n", iRet);

    printf("Data from file: \n");    

    write(1, Data, iRet);  //write(SDOUT, what to write, how many bytes to write);

    printf("\n");

    close(fd);  

    return 0;
}