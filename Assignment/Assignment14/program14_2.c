//////////////////////////////////////////////////
//      
//     Funtion name :    FactRev
//     Description  :    Accept number print its factors in decreaseing order
//     Input        :    Integer
//     Output       :    Display number
//     Author       :    Payal Machhindra Bhand
//     Date         :    04/11/2026
// 
////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FactRev(int iNo )
{
    int iCnt = 0 ;

    for(iCnt = iNo/2 ; iCnt >=  1 ; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter number : ") ;
    scanf("%d",&iValue);

    FactRev(iValue);

    return EXIT_SUCCESS ;
}