////////////////////////////////////////////
//Function Name:CheckNumber
// Discription : check number prsitive , negative or zero
//Input: Integer
//Output:integer
//Date:21/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("Positive Number");
    }
    else if(iValue < 0)
    {
        printf("Negtive Number");
    }
    else
    {
        printf("Zero");
    }
}
int main()
{
    int iValue ;

    printf("Enter number : ");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return 0;
}