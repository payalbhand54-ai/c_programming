// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Print the Number of * and #.
// Input         : Integer Number: 5.
// Output        : *    *   *   *   *   #   #   #   #   #
// Author        : Payal Machhindra Bhand
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
    
}

int main()
{
    int iValue =  0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}