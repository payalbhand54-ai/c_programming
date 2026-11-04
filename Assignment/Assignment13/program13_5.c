// ////////////////////////////////////////////////////////////////
//
// Function Name : CountDiff
// Description   : return difference between even digits and odd digits.
// Input         : Accept Number
// Output        : Display Difference between even digits and odd digits
// Author        : Payal Machhindra Bhand
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSum1 =0, iSum2 = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iSum2 = iSum2 + iDigit;
        }
        
        iNo = iNo / 10;
    }
    return (iSum1 - iSum2);
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}