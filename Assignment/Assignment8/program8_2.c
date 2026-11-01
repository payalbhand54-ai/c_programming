// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Print the word of Entered Single DigitNumber.
// Input         : Integer Number: 5.
// Output        : Five.
// Author        : Payal Machhindra Bhand
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        if(iNo == 1)
        {
            printf("One");
        }
        else if(iNo == 2)
        {
            printf("Two");
        }
        else if(iNo == 3)
        {
            printf("Three");
        }
        else if(iNo == 4)
        {
            printf("Four");
        }
        else if(iNo == 5)
        {
            printf("Five");
        }
        else if(iNo == 6)
        {
            printf("Six");
        }
        else if(iNo == 7)
        {
            printf("Seven");
        }
        else if(iNo == 8)
        {
            printf("Eight");
        }
        else
        {
            printf("Nine");
        }
    }
    else
    {
        printf("invalid input");
    }
   
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
