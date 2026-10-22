#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////
// Function Name: CalculateBonus
// Description: It is used to calculate the bonus
// Input: float , int
// Output: Void
// Date: 22/10/2026
// Author: Payal Machhindra Bhand
////////////////////////////////////////////

void CalculateBonus(float fSalary, int iYear)
{
    float fBonus = 0.0f;

    if(fSalary < 0 || iYear < 0)
    {
        printf("Invalid input");
    }
    else if(iYear > 10)
    {
        fBonus = fSalary * 15 / 100;
    }
    else if(iYear >= 5)
    {
        fBonus = fSalary * 10 / 100;
    }
    else
    {
        fBonus = fSalary * 5 / 100;
    }

    if(fSalary >= 0 && iYear >= 0)
    {
        printf("Bonus Amount : %.2f", fBonus);
    }
}
int main()
{
    float fSalary = 0.0f;
    int iYear = 0;

    printf("Enter salary and year od service :");
    scanf("%f %d", &fSalary, &iYear);

    CalculateBonus(fSalary, iYear);
    return EXIT_SUCCESS;
}