////////////////////////////////////////////
//Function Name:DisplayEvenFactor
//Discription:it is used to display even factor 
//Input: Integer
//Output:integer
//Date:21/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0 ;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1 ; i <= iNo ; i++)
    {
        if((iNo % i) == 0 && (i % 2) == 0 )
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}