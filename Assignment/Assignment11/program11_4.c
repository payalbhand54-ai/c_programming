// ////////////////////////////////////////////////////////////////
//
// Function Name : RangeSumEven
// Description   : Display Addition of the Given Even range numbers
// Input         : Accept Starting and Ending Number
// Output        : Display Even Number Addition
// Author        : Payal Machhindra Bhand
// Date          : 03/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void RangeEvenSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;
    
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
            iSum = iSum + iCnt;
            }
        }

        if(iStart < 0 || iEnd < 0)
        {
            printf("Invalid Range ");
        }
        else
        {
            printf("%d\t",iSum);
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

    RangeEvenSum(iValue1 , iValue2);

    return EXIT_SUCCESS;
}