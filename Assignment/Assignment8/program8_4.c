// ////////////////////////////////////////////////////////////////
//
// Function Name : Table
// Description   : Print the Table of Given Number.
// Input         : Integer Number: 10.
// Output        : Table of 10.
// Author        : Payal Machhindra Bhand
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",iCnt*iNo);
    }
}
 
int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}
