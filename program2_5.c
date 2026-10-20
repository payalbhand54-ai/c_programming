////////////////////////////////////////////
//Function Name:CheckEven
//Discription:it is used to check number is even or odd
//Input: Int
//Output:Int
//Date:21/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d" ,&iValue);

    bRet = CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }

    return 0;
}

