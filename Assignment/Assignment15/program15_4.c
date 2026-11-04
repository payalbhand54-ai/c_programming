///////////////////////////////////////////////////
//      
//     Funtion name :    Multiply
//     Description  :    Accept three number and print its multiplication
//     Input        :    Accept three integer number from user
//     Output       :    retrun integer Multiplication
//     Author       :    Payal machhindra Bhnad
//     Date         :    04/11/2026
// 
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1 , int iNo2 , int iNo3)
{
    int iMult = 1;

    if (iNo1 == 0  )
    {
        iNo1 = iNo1 +1 ;
    } 
    if(iNo2 == 0)
    {
        iNo2 = iNo2 + 1 ;
    }
    if(iNo3 == 0)
    {
        iNo3 = iNo3+ 1 ;
    }

    iMult = iNo1 * iNo2 * iNo3 ;

    return iMult ;
}

int main()
{
    int iValue1 = 0 ;
    int iValue2 = 0 ;
    int  iValue3 = 0 ;
    int iRet = 0 ;

    printf("Enter three number : \n");
    scanf("%d %d %d",&iValue1 ,&iValue2 ,&iValue3);

    iRet = Multiply(iValue1 , iValue2 ,iValue3);

    printf("Multipication  is : %d",iRet);

    return EXIT_SUCCESS ;
}