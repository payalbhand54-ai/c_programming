////////////////////////////////////////////
//Function Name:PrintEven
//Discription:it is used to print even number 
//Input: Integer
//Output:integer
//Date:21/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 1;
    int iNum = 2;

    if(iNo <= 0)
    {
        return;
    }

    while(iCnt <= iNo)
    {
        printf("%d\t" ,iNum);

        iNum = iNum + 2;
        iCnt ++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}