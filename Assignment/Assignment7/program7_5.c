// ////////////////////////////////////////////////////////////////
//
// Function Name : MultipleDisplay
// Description   : Print the first five multiple of the Given number.
// Input         : Integer Number: 10
// Output        : 10    20    30    40    50
// Author        : Payal Machhindra Bhand
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayMultiple(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t",iCnt*iNo);
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    DisplayMultiple(iValue);

    return EXIT_SUCCESS;
}