// ////////////////////////////////////////////////////////////////
//
// Function Name : OddFactorial
// Description   : Print the Odd Factorial of Number
// Input         : Integer Number: 5.
// Output        : Odd Factorial of Number is: 15
// Author        : Payal Machhindra Bhand
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iFact  = iFact*iCnt;
        }
        
    }
    return iFact;
    
    

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Even factorial of number is :%d",iRet);

    return EXIT_SUCCESS;
}