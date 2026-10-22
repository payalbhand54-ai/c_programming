#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////
// Function Name: CheckElectricityBill
// Description: It is used to check electrick bill 
//              according to units
// Input: Int
// Output: Int
// Date: 22/10/2026
// Author: Payal Machhindra Bhand
////////////////////////////////////////////

void CheckElectricityBill(int iUnits)
{
    int iBill = 0;

    if(iUnits < 0)
    {
        printf("Invalid units");
    }
    else if(iUnits <= 100)
    {
        iBill = iUnits * 5;
        printf("Electricity Bill : Rs. %d", iBill);
    }
    else if(iUnits <= 200)
    {
        iBill = (100 * 5) + ((iUnits - 100) * 7);
        printf("Electricity Bill : Rs. %d", iBill);
    }
    else
    {
        iBill = (100 * 5) + (100 * 7) +
                ((iUnits - 200) * 10);
        printf("Electricity Bill : Rs. %d", iBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units :");
    scanf("%d", &iUnits);

    CheckElectricityBill(iUnits);
    
    return EXIT_SUCCESS;
}