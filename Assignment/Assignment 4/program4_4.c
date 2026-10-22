////////////////////////////////////////////
//Function Name:CheckVotingEligibility
// Discription :check voting eligibility
//Input: Integer
//Output:integer
//Date:21/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge <= 0)
    {
        printf("Invalid input");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for voting");
    }
    else 
    {
        printf("Not Eligible for voting");
    }

}
int main()
{
    int iAge = 0;

    printf("Enter your age :");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}
