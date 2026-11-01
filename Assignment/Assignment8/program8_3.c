// ////////////////////////////////////////////////////////////////
//
// Function Name : Factorial
// Description   : Print Factorial
// Input         : 4
// Output        : 24
// Author        : Payal Machhindra Bhand
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = iNo; iCnt >= 1 ; iCnt-- )
    {
        iFact = iFact * iCnt;
        
    }
    
    return iFact;

}
 
int main()
{
    int iValue =0, iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial number is :%d",iRet);

    return EXIT_SUCCESS;

}
