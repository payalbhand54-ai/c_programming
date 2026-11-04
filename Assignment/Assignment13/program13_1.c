// ////////////////////////////////////////////////////////////////
//
// Function Name : CountEven
// Description   : Display count of even digit.
// Input         : Accept Number from user
// Output        : Display count of even digit.
// Author        : Payal Machhindra Bhand
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount =0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
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

    iRet = CountEven(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}