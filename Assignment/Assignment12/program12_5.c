// ////////////////////////////////////////////////////////////////
//
// Function Name : Count
// Description   : Display frequence such a digit which are less than 6 .
// Input         : Accept Number
// Output        : Display frequence
// Author        : Payal Machhindra Bhand
// Date          : 03/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    printf("%d",iCount);
    

}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Count(iValue);

    return EXIT_SUCCESS;
}