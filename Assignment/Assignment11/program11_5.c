// ////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayRev
// Description   : Display number in between Range in reverse order
// Input         : Accept Starting and Ending Number
// Output        : Display number betwwen Ending and Starting Numbers
// Author        : Payal Machhindra Bhand
// Date          : 03/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

        if(iEnd < iStart)
        {
            printf("Invalid range");
        }
        else
        { 
            for(iCnt = iEnd; iCnt >= iStart; iCnt--)
            {
                printf("%d\t",iCnt);
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

    RangeDisplayRev(iValue1 , iValue2);

    return EXIT_SUCCESS;
}