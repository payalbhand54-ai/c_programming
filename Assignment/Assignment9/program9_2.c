// ////////////////////////////////////////////////////////////////
//
// Function Name : DollarToINR
// Description   : Print the INR value of the given Dollar.
// Input         : Integer Number: 10.
// Output        : Value in INR is : 700
// Author        : Payal Machhindra Bhand
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iCnt = 0;
     
    iCnt = iNo * 70;

    return iCnt;

}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is :%d",iRet);

    return EXIT_SUCCESS;
}