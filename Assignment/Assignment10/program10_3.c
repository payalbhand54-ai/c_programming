// ////////////////////////////////////////////////////////////////
//
// Function Name : KMtoMeter
// Description   : Convert kilometer into meter
// Input         : 5
// Output        : 5000
// Author        : Payal Machhindra Bhand
// Date          : 1/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int iCnt = 0;

    iCnt = iNo * 1000;

    return iCnt;
}

int main()
{
    int iValue = 0, iRet =0;

    printf("Enter distance :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter :%d\n",iRet);

    return EXIT_SUCCESS;
}