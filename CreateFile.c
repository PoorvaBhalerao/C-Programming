#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    int fd = 0;

    printf("Enter name of file that you want to create : \n");
    scanf("%s",Name);   //Name is array so name of array is considered as Base address 
                        //So & operator is not used
    fd = creat(Name, 0777);
    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets created with FD %d\n",fd);
    }

    return 0;
}

//the file gets created in current directly   Dektop/PPA/C
//Poorva 
//Marvellous.txt