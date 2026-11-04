// ////////////////////////////////////////////////////////////////
//
// Function Name : CoutFour
// Description   : check frequency of Four.
// Input         : Accept number
// Output        : Display Four frequency
// Author        : Payal Machhindra Bhand
// Date          : 03/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    printf("%d",iCount);
    

}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    CountFour(iValue);

    return EXIT_SUCCESS;
}