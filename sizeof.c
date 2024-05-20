#include<stdio.h>

int main()
{
    char ch = 'A';      //1 Byte
    int i = 11;         //4 Bytes
    float f = 90.89;        //4 Bytes
    double d = 90.768459;       //8 Bytes
    
    int Arr[5];             //20 Bytes
    double Brr[5];          // 40 Bytes
    float Crr[5];           // 20 Bytes
    char Drr[5];            // 5 Bytes

    printf("%lu\n",sizeof(ch));//1   //lu = Long Unsigned or if we dont get error then we can write %d
    printf("%lu\n",sizeof(i));//4
    printf("%lu\n",sizeof(f));//4
    printf("%lu\n",sizeof(d));//8

    printf("%lu\n",sizeof(Arr)); //20
    printf("%lu\n",sizeof(Brr)); //40
    printf("%lu\n",sizeof(Crr)); //20
    printf("%lu\n",sizeof(Drr)); //5

    printf("%lu\n",sizeof(Arr[0])); //4
    printf("%lu\n",sizeof(Brr[2])); //8 because array is of double type

    return 0;
}


// gcc sizeof.c -o Myexe
// Myexe.exe
// output
//1   
//4
//4
//8
//20
//40
//20
//5
//4
//8