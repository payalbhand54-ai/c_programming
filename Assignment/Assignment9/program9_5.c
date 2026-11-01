// ////////////////////////////////////////////////////////////////
//
// Function Name : FactorialDiff
// Description   : Print the Difference between Evan and Odd Factorial.
// Input         : Integer Number: 5.
// Output        : Factorial Difference is: -7
// Author        : Payal Machhindra Bhand
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    int iFact1 = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFact  = iFact*iCnt;
        }
        
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iFact1  = iFact1*iCnt;
        }
        
    }

    return (iFact - iFact1);

    return iFact;
    
    

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Even factorial of number is :%d",iRet);

    return EXIT_SUCCESS;
}