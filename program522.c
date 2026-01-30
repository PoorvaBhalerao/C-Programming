// Accept file name from user, open it read data from file and write it

#include<stdio.h>           
#include<stdlib.h>
//#include<unistd.h>
#include<fcntl.h>           

int main()
{
    int fd = 0 ,iRet = 0;
    char Fname[100] = {'\0'};
    char Buffer[100] = {'\0'};


    printf("Enter the name of file: \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDWR);

    if(fd != -1)
    {
        printf("File is successfully opened\n");
        
        printf("data from file is: \n");
        while((iRet = read(fd, Buffer, sizeof(Buffer)))  != 0)          // Run till return value of read will not zero
        {
            //write(1, Buffer, iRet);
            printf("iRet is: %d\n",iRet);
        }

        printf("\n");
        close(fd);
    }
    else
    {
        printf("There is no such file exists\n");
    }

    

    return 0;
}

