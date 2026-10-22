////////////////////////////////////////////
//Function Name:Display
//Discription:it is used to print number of *  
//Input: Int
//Output:Int
//Date:21/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    //Updater
    while(iCnt < iNo)
    {
        printf("*\t");
        iCnt++;
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0 ;
}