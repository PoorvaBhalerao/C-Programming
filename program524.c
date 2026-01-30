// Accept file name from user, open it read data from file and find how many times 'a' occured in file.

#include<stdio.h>           
#include<stdlib.h>
//#include<unistd.h>
#include<fcntl.h>           

int main()
{
    int fd = 0 ,iRet = 0, iCount = 0, iCnt = 0;
    char Fname[100] = {'\0'};
    char Buffer[100] = {'\0'};


    printf("Enter the name of file: \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDWR);

    if(fd != -1)
    {
        printf("File is successfully opened\n");
        
        while((iRet = read(fd, Buffer, sizeof(Buffer)))  != 0)          
        {
            for(iCnt =0; iCnt < iRet; iCnt++)
            {
                if(Buffer[iCnt] == 'a')
                {
                    iCount++;
                }
            }
        }

        printf("Count of 'a' is: %d\n",iCount);
        close(fd);
    }
    else
    {
        printf("There is no such file exists\n");
    }

    

    return 0;
}

