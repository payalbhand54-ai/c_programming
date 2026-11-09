///////////////////////////////////////////////////
//     Funtion name :    Pattern
//     Description  :    accept number of rows and column and display below patttern 
//     Input        :    iRow =4  iCol = 4
//     Output       :    A B C D
//                       a b c d
//                       A B C D 
//                       a b c d
//     Author       :    Payal machhindra bhand
//     Date         :    09/11/2026
// 
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0 , j = 0;
    char ch ='\0';

    for(j = 1; j <= iCol; j++)
    {
        if(j % 2 != 0)
        {
            for(i = 1, ch = 'A'; i <= iRow ; i++,ch++)
            {
                printf("%c\t",ch);
            }
        }
        else
        {
            for(i = 1, ch = 'a'; i <= iRow ; i++,ch++)
            {
                printf("%c\t",ch);
            }
        }
        printf("\n\n");
    }

}


int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enetr number of rows and columns:");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}