// Create a new file

#include<stdio.h>           // MACRO for below functions are come from this header file
#include<stdlib.h>
//#include<unistd.h>
#include<fcntl.h>           // all file related functions are come from this header file

int main()
{
    int fd = 0;
    fd = creat("LB.txt", 0777);

    printf("FD is : %d\n",fd);

    return 0;
}