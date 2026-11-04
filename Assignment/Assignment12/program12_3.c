// ////////////////////////////////////////////////////////////////
//
// Function Name : CoutTwo
// Description   : check frequency of two.
// Input         : Accept number
// Output        : Display Twos frequency
// Author        : Payal Machhindra Bhand
// Date          : 03/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CountTwo(int iNo)
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
        if(iDigit == 2)
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

    CountTwo(iValue);

    return EXIT_SUCCESS;
}