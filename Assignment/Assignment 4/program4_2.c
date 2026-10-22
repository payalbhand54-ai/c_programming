////////////////////////////////////////////
//Function Name:CheckEvenOdd
// Discription :check number is even or not
//Input: Integer
//Output:integer
//Date:21/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("Even Number ");
    }
    else
    {
        printf("Odd Number ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);
    
    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}