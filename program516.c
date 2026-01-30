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
    char Arr[10] = {'\0'};

    fd = open("JanuaryX.txt", O_RDONLY);

   
    printf("File gets successfully opened with FD: %d\n",fd);

    iRet = read(fd, Buffer, 11);                // read(fd, where to read, how many bytes);

    printf("Data from file is: %s\n",Buffer);
    printf("Return value of read is: %d\n\n",iRet);     // 11

    close(fd);

    fd = open("JanuaryX.txt", O_RDONLY);

    iRet = read(fd, Arr, 10);

    printf("Data from file is: %s\n",Arr);
    printf("Return value of read is: %d\n",iRet);     //10

        
    close(fd);    

    return 0;
}

//if we opened file to read something and close it and again open it and again  read it then it will read  data from starting