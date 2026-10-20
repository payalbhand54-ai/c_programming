////////////////////////////////////////////
//Function Name:Display
//Discription:it is used to print first number of second number
//Input: Int , Int
//Output:Int
//Date:21/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo , int iFrequency)
{
    int iCnt = 0;

    for(iCnt=1 ; iCnt <= iFrequency ; iCnt++)
    {
        printf("%d\t", iNo);
    }
}
int main()
{
    int iValue = 0 , iCount = 0;

    printf("Enter first number :");
    scanf("%d",&iValue);

    printf("Enter second number :");
    scanf("%d",&iCount);

    Display(iValue , iCount);

    return 0;
}