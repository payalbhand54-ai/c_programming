// ////////////////////////////////////////////////////////////////
//
// Function Name : DisplayEvenRange
// Description   : Display Even number in between Range.
// Input         : Accept Starting and Ending Number
// Output        : Display Even number betwwen Starting and Ending Numbers
// Author        : Payal Machhindra Bhand
// Date          : 03/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayEvenRange(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iEnd < iStart)
    {
        printf("Invalid range");
    }
    else
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                printf("%d\t",iCnt);
            }
        }
    }
}

int main()
{

    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    DisplayEvenRange(iValue1 , iValue2 );

    return EXIT_SUCCESS;
}