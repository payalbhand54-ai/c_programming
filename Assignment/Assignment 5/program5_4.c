////////////////////////////////////////////
//Function Name:DisplayGrade
//Discription:It is used to check whether
//              a number is divisible by 3, 5,
//              or both 3 and 5 
//Input: Int 
//Output:Int
//Date:22/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if(iValue % 3 == 0)
    {
        if(iValue % 5 == 0)
        {
            printf("Number Divisible by both");
        }
        else
        {
            printf("Number Divisible by 3");
        }
    }
    else if(iValue % 5 == 0)
    {
        printf("Number Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 3 and 5");
    }
}


int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}
