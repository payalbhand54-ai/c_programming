// ////////////////////////////////////////////////////////////////
//
// Function Name : CountOdd
// Description   : return Odd digits count.
// Input         : Accept Number
// Output        : Display Odd digits count
// Author        : Payal Machhindra Bhand
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount =0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 1)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}