#include<stdio.h>

typedef int BOOL;
#define true 1
#define false 0

BOOL Check(int iNo)
{

    if(iNo % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 1;
    BOOL bRet = 0;

    printf("Enter Number :");
    scanf("%d" ,&iValue);

    bRet = Check(iValue);
    
        if(bRet == true)
        {
            printf("Divisible by 5 \n");
        }
        else
        {
            printf("Not Divisible by 5 \n");
        }
    
    

    return 0;
}