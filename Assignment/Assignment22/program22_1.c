////////////////////////////////////////////////////////
//     Funtion name :   Pattern
//     Description  :   accept number from user and display below patttern 
//     Input        :   5
//     Output       :   A   B   C   D
//     Author       :   Payal Machhindra Bhand
//     Date         :   14/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 1;
    char ch = 'A';
    
    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t",ch);
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