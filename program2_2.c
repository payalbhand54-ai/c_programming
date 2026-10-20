////////////////////////////////////////////
//Function Name:Display
//Discription:it is used to print *
//Input: Int
//Output:Int
//Date:21/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    while(iNo > iCnt)
    {
        printf("*\t");
        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}