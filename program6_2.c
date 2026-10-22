#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////
// Function Name: CheckAdmission
// Description: It is used to check student eligibility
// Input: float , int
// Output: void
// Date: 22/10/2026
// Author: Payal Machhindra Bhand
////////////////////////////////////////////

void CheckAdmission(float fMarks ,int iAge)
{
    if((fMarks < 100 ) && (fMarks > 0 ) && (iAge > 0))
    {
        if((fMarks >= 60) && (iAge >= 17))
        {
            printf("Eligible for Admission ");
        }
        else
        {
            printf("Not Eligible ");
        }
    }
    else
    {
        printf("Invalid Input ");
    } 
    
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age :");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks ,iAge);
    return EXIT_SUCCESS;
}