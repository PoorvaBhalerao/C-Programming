// Create a new file, open it and write data into it (Buffer used for data)


#include<stdio.h>           
#include<stdlib.h>
//#include<unistd.h>
#include<fcntl.h>           

int main()
{
    int fd = 0;
    int iRet = 0;
    char Arr[] = "Pune";

    fd = open("JanuaryX.txt", O_RDWR);           

    if(fd == -1)
    {
        printf("Unable is open file\n");
    }
    else
    {
        printf("File gets successfully opened with fd: %d\n",fd);

        iRet = write(fd, Arr, 3);       // when we create file using open system call with O_RDWR MACRO, offset is set to 0 so data might be overwritten

        printf("%d bytes gets successfully written into the file\n", iRet); 

        close(fd);
    }    

    return 0;
}