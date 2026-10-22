////////////////////////////////////////////
//Function Name:CheckLeapYear
//Discription:it is used to check given input is leapyear or not 
//Input: Int 
//Output:Int
//Date:22/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if((iYear % 400) == 0 || (iYear % 4) == 0 && (iYear % 100) != 0)
    {
        printf("Leap Year ");
    }
    else
    {
        printf("Not Leap Year ");
    }

}
int main()
{
    int iValue = 0;
     
    printf("Enter Year :");
    scanf("%d" , &iValue);

    CheckLeapYear(iValue);
    
    return EXIT_SUCCESS;
}
