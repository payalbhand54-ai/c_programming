// ////////////////////////////////////////////////////////////////
//
// Function Name : RectArea
// Description   : Print area of rectangle
// Input         : Height = 5 , weight = 6;
// Output        : 30
// Author        : Payal Machhindra Bhand
// Date          : 1/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double RectArea(float fHeight, float fWeight)
{
    float fArea;

    fArea = fHeight * fWeight;

    return fArea;
}

int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Height :");
    scanf("%f",&fValue1);

    printf("Enter Weight :");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);
    printf("Area of circle :%f",dRet);

    return EXIT_SUCCESS;
}