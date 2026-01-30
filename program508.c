// Create a new file, open it and write data into it

#include<stdio.h>           
#include<stdlib.h>
//#include<unistd.h>
#include<fcntl.h>           
int main()
{
    int fd = 0;

    fd = open("January.txt", O_RDWR | O_CREAT, 0777);           //if file not exists then we created it using open system call and give full permission 

    if(fd == -1)
    {
        printf("Unable is open file\n");
    }
    else
    {
        printf("File gets successfully opened with fd: %d\n",fd);
        write(fd, "jay Ganesh", 3);            
        close(fd);
    }    

    return 0;
}