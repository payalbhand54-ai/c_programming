////////////////////////////////////////////////////////
//     Funtion name :   Pattern
//     Description  :   accept number from user and display below patttern 
//     Input        :   5
//     Output       :   #   1   *   #   2   *   #   3   *   #   4   *   #   5   *
//     Author       :   Payal Machhindra Bhand
//     Date         :   14/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 1;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
    }
    printf("\n\n");
}

int main()
{
    int iValue;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}