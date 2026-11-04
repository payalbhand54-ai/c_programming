
///////////////////////////////////////////////////
//      
//     Funtion name :    MultFact
//     Description  :    Accept number print its multipication of factor
//     Input        :    Integer
//     Output       :    retrun integer
//     Author       :    Payal Machhindra Bhand
//     Date         :    04/11/2026
// 
////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int MultFact(int iNo)
{
    int iCnt = 0 ;
    int iAns = 1 ;
    
    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iAns = iAns * iCnt ;
        }

    }
    return iAns ;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter number : ") ;
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS ;
}