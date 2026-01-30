// Accept two file names from user, first file should be existing and second file should be new file 
//and copy contents of first file to second. --copied from program526.c programmatically

#include<stdio.h>           
#include<stdlib.h>
//#include<unistd.h>
#include<fcntl.h>           

int main()
{
    int fdSrc = 0, fdDest = 0;
    int iRet = 0;
    char fSource[100] = {'\0'};
    char fDest[100] = {'\0'};
    char Buffer[100] = {'\0'};

    printf("Enter the name of source file:\n");
    scanf("%s",fSource);

    printf("Enter the name of destination file:\n");
    scanf(" %s",fDest);

    fdSrc = open(fSource, O_RDONLY);

    if(fdSrc == -1)
    {
        printf("Unable to open source file\n");
        return -1;
    }

    fdDest = creat(fDest, 0777);

    if(fdDest == -1)
    {
        printf("Unable to create the file\n");
        close(fdSrc);                               // because as per above if statement source file is already opened
        return -1;
    }

    while((iRet = read(fdSrc, Buffer, sizeof(Buffer)))  != 0)
    {
         write(fdDest, Buffer, iRet);
    }

    printf("File copied successfully\n");
    
    close(fdDest);   

    return 0;
}

