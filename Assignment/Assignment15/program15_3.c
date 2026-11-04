///////////////////////////////////////////////////
//      
//     Funtion name :    ChkEqual
//     Description  :    Accept two number and check it is equale or not
//     Input        :    Accept two number from user (Integer)
//     Output       :    retrun true or False
//     Author       :    Payal machhindra Bhnad
//     Date         :    04/11/2026
// 
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL ;

BOOL ChkEqual(int iNo1 ,int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1  ,iValue2 = 0 ; 
    bool bRet = false ;

    printf("Enter First number :");
    scanf("%d",&iValue1);

    printf("Enter Second number :");
    scanf("%d",& iValue2);

    bRet = ChkEqual(iValue1 , iValue2);

    if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return EXIT_SUCCESS ;
}