///////////////////////////////////////////////////
//      
//     Funtion name :    NontFact
//     Description  :    Accept number print its non of factor
//     Input        :    Integer
//     Output       :    retrun integer
//     Author       :    Payal Machhindra Bhand
//     Date         :    04/11/2026
// 
////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void NonFact(int iNo)
{
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        if(iNo % iCnt != 0 )
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter number : ");
    scanf("%d",& iValue);

    NonFact(iValue);

    return EXIT_SUCCESS ;
}