///////////////////////////////////////////////////
//      
//     Funtion name :    ChkGreaater
//     Description  :    Accept number print it is greater than 100 or not
//     Input        :    Acept from user (int)
//     Output       :    retrun true or False
//     Author       :    Payal machhindra Bhnad
//     Date         :    04/11/2026
// 
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL ;

BOOL ChkGRaater(int iNo)
{
    if(iNo > 100)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}
int main()
{
    int iValue = 0 ; 
    bool bRet = false ;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = ChkGRaater(iValue);

    if(bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return EXIT_SUCCESS ;
}