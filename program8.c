//write a program to Accept two numbers from user and display addition

/*
    Step1:  Understand the problem statement
    Step2:  Write the algorithm
    Step3:  Decide the programming language
    Step4:  Write the program
    Atep5:  Test the program
*/

/*
    Algorithm:

    START
        Accept First number as No1
        Accept second number as No2
        Perform Addition of No1 and No2
        Display Addition on Screen
    STOP
*/

#include<stdio.h>

float AdditionTwoNumbers(float fValue1, float fValue2)
{
    float fSum = 0;
    fSum = fValue1 + fValue2;    // Business Logic
    return fSum;
}

int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fRet = 0.0f;

    printf("Enter First number: \n");
    scanf("%f",&fNo1);

    printf("Enter Second number: \n");
    scanf("%f",&fNo2);

    fRet = AdditionTwoNumbers(fNo1 , fNo2);
    
    printf("Addition is : %f\n",fRet);

    return 0;
}