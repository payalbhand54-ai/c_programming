////////////////////////////////////////////
//Function Name:Greaternumber
// Discription : find greater number
//Input: Integer , Integer
//Output:integer
//Date:21/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void GreaterNumber(int iFirst , int iSecond)
{
    if(iFirst >= iSecond)
    {
        printf("%d is Greater number", iFirst);
    }
    else
    {
        printf("%d is Greater number", iSecond );
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two Number :");
    scanf("%d %d", &iValue1 ,&iValue2);

    GreaterNumber(iValue1 ,iValue2);

    return EXIT_SUCCESS;
}
