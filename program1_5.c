////////////////////////////////////////////
//Function Name:Accept
//Discription:it is used to print 5 times *
//Input: Int
//Output:Int
//Date:21/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt =0;
    for(iCnt=1 ; iCnt<=5 ; iCnt++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);


    return 0;
}