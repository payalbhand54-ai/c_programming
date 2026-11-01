// ////////////////////////////////////////////////////////////////
//
// Function Name : TableRev
// Description   : Print the Table of Given Number in Reverse Order.
// Input         : Integer Number: 10.
// Output        : Reverse Table of 10.
// Author        : Payal Machhindra Bhand
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt*iNo);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;

}
