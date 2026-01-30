// Create a new file, open it and write data into it

#include<stdio.h>           
#include<stdlib.h>
//#include<unistd.h>
#include<fcntl.h>           
int main()
{
    int fd = 0;

    fd = open("PPA.txt", O_RDWR);

    if(fd == -1)
    {
        printf("Unable is open file\n");
    }
    else
    {
        printf("File gets successfully opened with fd: %d\n",fd);
        write(fd, "jay Ganesh", 10);            
        close(fd);
    }


    

    return 0;
}