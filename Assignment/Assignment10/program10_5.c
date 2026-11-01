// ////////////////////////////////////////////////////////////////
//
// Function Name : SquareMeter
// Description   : area in square feet convert into square meter
// Input         : 5
// Output        : 0.464500
// Author        : Payal Machhindra Bhand
// Date          : 1/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iNo)
{
    float fCnt = 0.0f;

    fCnt = iNo * (0.0929);

    return fCnt;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area is square feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter :%f\n",dRet);

    return 0;

}