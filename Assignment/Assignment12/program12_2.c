// ////////////////////////////////////////////////////////////////
//
// Function Name : ChkZero
// Description   : check frequency of zero.
// Input         : Accept number
// Output        : Display zeros frequency
// Author        : Payal Machhindra Bhand
// Date          : 03/11/2026
//
// //////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            printf("It contains zero");
            return;
        }

        iNo = iNo / 10;
    }

    if(iNo == 0)
    {
        printf("There is no zero");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    ChkZero(iValue);

    return EXIT_SUCCESS;
}