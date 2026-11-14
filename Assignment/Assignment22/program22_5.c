////////////////////////////////////////////////////////
//     Funtion name :   Pattern
//     Description  :   accept number from user and display below patttern 
//     Input        :   5
//     Output       :   2   4   6   8   10  12  16
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
        printf("%d\t",iCnt * 2);
    }
}

int main()
{
    int iValue;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}