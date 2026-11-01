// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Print the Number line of that number
// Input         : Integer Number: 3
// Output        : -3   -2  -1  0   1   2   3
// Author        : Payal Machhindra Bhand
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}