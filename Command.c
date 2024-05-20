#include<stdio.h>

int main(int argc, char *argv[])    //character pointer points to array of characters
{
    printf("Number of command line argumets are: %d\n",argc);

    int i = 0;
    for(i =0 ; i<argc ; i++)
    {
        printf("%s\n",argv[i]);
    }
    return 0;
}

//gcc Command.c -o Myexe
//Myexe.exe PPA Marvellous 11 LB 21

//No of Commands line argumets are: 