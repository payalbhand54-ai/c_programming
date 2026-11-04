// ////////////////////////////////////////////////////////////////
//
// Function Name : DisplayRange
// Description   : Display number in between Range.
// Input         : Accept Starting and Ending Number
// Output        : Display number betwwen Starting and Ending Numbers
// Author        : Payal Machhindra Bhand
// Date          : 03/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;

}