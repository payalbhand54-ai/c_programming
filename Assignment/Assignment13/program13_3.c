// ////////////////////////////////////////////////////////////////
//
// Function Name : CountRange
// Description   : count the range betwwen 3 and 7.
// Input         : Accept Number
// Output        : Display count the range betwwen 3 and 7 
// Author        : Payal Machhindra Bhand
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount =0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit >= 4 && iDigit <= 6)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}