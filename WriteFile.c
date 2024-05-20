#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// O_RDONLY     Read mode
// O_WRONLY     Write mode
// O_RDWR       Read + Write mode
int main()
{
    char Name[30];
    int fd = 0;
    int iRet = 0;
    char Data[] = "Marvellous Infosystems";     //22 bytes

    printf("Enter name of file that you want to open : \n");
    scanf("%s",Name);

    fd = open(Name, O_RDWR);

    iRet = write(fd,Data,22);       //(where to write,what to write,how to write)//22 bytes for data "Marvellous Infosystems"

    printf("%d bytes gets succesfully written into the file\n",iRet);
    
    close(fd);

    return 0;
}