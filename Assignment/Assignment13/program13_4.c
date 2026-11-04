// ////////////////////////////////////////////////////////////////
//
// Function Name : MultDigit
// Description   : Return Multiplication of given number.
// Input         : Accept Number from user
// Output        : Display Multiplication of given number
// Author        : Payal Machhindra Bhand
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int MultDigit(int iNo)
{
    int iDigit = 0;
    int iMul = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        iNo = iNo / 10;
    }
    return iMul;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}