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