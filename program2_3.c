////////////////////////////////////////////
//Function Name:Display
//Discription:it is used to print Hello if input less than 10 otherwise print Demo
//Input: Int
//Output:int
//Date:21/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{

    if(iNo < 10)
    {
        printf("Hello \n");
    }
    else
    {
        printf("Demo \n");
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