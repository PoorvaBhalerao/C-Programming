// Create a new file, open it and write data into it (Buffer used for data)
//and read data


#include<stdio.h>           
#include<stdlib.h>
//#include<unistd.h>
#include<fcntl.h>           

int main()
{
    int fd = 0;
    int iRet = 0;
    char Buffer[100] = {'\0'};

    fd = open("JanuaryX.txt", O_RDONLY);

    if(fd != -1)
    {
        printf("File gets successfully opened with FD: %d\n",fd);

        iRet = read(fd, Buffer, 11);                // read(fd, where to read, how many bytes);

        printf("Data from file is: %s\n",Buffer);
        
        close(fd);
    }

    return 0;
}