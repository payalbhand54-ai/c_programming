// ////////////////////////////////////////////////////////////////
//
// Function Name : FhtoCs
// Description   : covert fahrenheit into celsius
// Input         : 5.
// Output        : -15.00000
// Author        : Payal Machhindra Bhand
// Date          : 1/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    double fCel = 0.0f;

    fCel = ((fTemp - 32) * (5.0/9.0));

    return fCel;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in fahrenheit :");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celsius :%f\n",dRet);

    return 0;
}