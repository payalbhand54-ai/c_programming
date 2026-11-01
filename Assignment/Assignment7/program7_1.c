// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Print pattern until entered number of times.
// Input         : Integer number
// Output        : $    *
// Author        : Payal Machhindra Bhand
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayPattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt<=iNo ; iCnt++)
    {
        printf("$\t*\t");
    }
    printf("\n");
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return EXIT_SUCCESS;
    
    
}