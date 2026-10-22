#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////
// Function Name: CalculateDiscount
// Description: It is used to calculate the discount
// Input: Int
// Output: Int
// Date: 22/10/2026
// Author: Payal Machhindra Bhand
////////////////////////////////////////////

void CalculateDiscount(int iAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(iAmount < 0)
    {
        printf("Invalid amount");
    }
    else if(iAmount < 1000)
    {
        fDiscount = 0;
    }
    else if(iAmount <= 5000)
    {
        fDiscount = 10;
    }
    else
    {
        fDiscount = 20;
    }

    if(iAmount >= 0)
    {
        fFinalAmount = iAmount - (iAmount * fDiscount / 100);
        
        printf("Payable Amount =  : %.2f\n", fFinalAmount);
    }
}


int main()
{
    int iAmount = 0;

    printf("Enter purchase amount :");
    scanf("%d", &iAmount);

    CalculateDiscount(iAmount);

    return EXIT_SUCCESS;
}