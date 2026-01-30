// Create a new file, open it and write data into it (Buffer used for data)


#include<stdio.h>           
#include<stdlib.h>
//#include<unistd.h>
#include<fcntl.h>           

int main()
{
    int fd = 0;
    int iRet = 0;
    char Buffer[100] = {'\0'};
    char Arr[10] = {'\0'};

    fd = open("JanuaryX.txt", O_RDWR);

   
    printf("File gets successfully opened with FD: %d\n",fd);

    iRet = read(fd, Buffer, 11);                // read(fd, where to read, how many bytes);

    printf("Data from file is: \n");
    write(1, Buffer, iRet);                     // 1 is for stdout
    printf("\nReturn value of read is: %d\n\n",iRet);     // 11

    close(fd);

    fd = open("JanuaryX.txt", O_RDWR);

    iRet = read(fd, Arr, 10);

    printf("Data from file is: \n");
    write(1, Arr, iRet); 
    printf("\nReturn value of read is: %d\n",iRet);      //10

    close(fd);    

    return 0;
}

