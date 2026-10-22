////////////////////////////////////////////
//Function Name:DisplayGrade
//Discription:it is used to print student grade according marks 
//Input: Float 
//Output:void
//Date:22/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void DisplayGrade(float fMarks)
{
    if(fMarks >= 0 && fMarks <= 100)
    {
        if(fMarks >= 90)
        {
            printf("Grade A");
        }
        else if(fMarks >= 75)
        {
            printf("Grade B");
        }
        else if(fMarks >= 60)
        {
            printf("Grade C");
        }
        else if(fMarks >= 40)
        {
            printf("Grade D");
        }
        else
        {
            printf("Fail");
        }
    }
    else
    {
        printf("Invalid input");
    }
}


int main()
{
    float fMarks = 0.0f;

    printf("Enter Marks :");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}