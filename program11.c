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
        if input is negative then convert it into positive
        Perform Addition of No1 and No2
        Display Addition on Screen
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Fuction Name:   AditionTwoNumbers
//  Descrription:   It is Used to perform Addition
//  Input:          Float, Float
//  Output:         Float
//  Author:         Poorva Rohan Bhalerao
//  Date:           09/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(
                            float fValue1,                  // First Input  
                            float fValue2                   // Second input
                        )
{
    float fSum = 0;                                         //To store result

    if(fValue1 < 0.0)                                       //Updator
    {
        fValue1 = -fValue1;
    }

    if(fValue2 < 0.0)                                       //Updator
    {
        fValue2 = -fValue2;
    }
    
    fSum = fValue1 + fValue2;                               // Business Logic
    return fSum;

}//End of AdditionTwoNumbers Function

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Fuction for the Application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f;                         // To accept input
    float fRet = 0.0f;                                      // To display Output

    printf("Enter First number: \n");
    scanf("%f",&fNo1);

    printf("Enter Second number: \n");
    scanf("%f",&fNo2);

    fRet = AdditionTwoNumbers(fNo1 , fNo2);
    
    printf("Addition is : %f\n",fRet);

    return 0;
}// End of main

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//
//  Input1 : 10.5   Inputt2: 3.2    Output: 13.7
//  Input1 :-10.5   Inputt2: 3.2    Output: 13.7
//  Input1 : 10.5   Inputt2:-3.2    Output: 13.7
//  Input1 :-10.5   Inputt2:-3.2    Output: 13.7
//  Input1 : 10.5   Inputt2: 0.0    Output: 10.5
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////