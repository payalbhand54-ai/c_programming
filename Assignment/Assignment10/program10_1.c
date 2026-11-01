// ////////////////////////////////////////////////////////////////
//
// Function Name : CircleArea
// Description   : print area of circle
// Input         : 5
// Output        : 78.500
// Author        : Payal Machhindra Bhand
// Date          : 1/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    float fArea ;
    float Pi = 3.14;

    fArea = Pi * fRadius * fRadius;

    return fArea;


}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius :");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("Area of circle :%f",dRet);

    return EXIT_SUCCESS;
}