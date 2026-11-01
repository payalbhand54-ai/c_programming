// ////////////////////////////////////////////////////////////////
//
// Function Name : OddDisplay
// Description   : Print the odd number till Entered number.
// Input         : Integer Number: 10
// Output        : 1    3     5     7     9
// Author        : Payal Machhindra Bhand
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayOdd(int iNo)
{
    int iCnt = 0;

        for(iCnt = 1; iCnt <=iNo; iCnt+=2)
        {
             
            printf("%d\t",iCnt);
            
        }
    }


int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    DisplayOdd(iValue);

    return EXIT_SUCCESS;
}