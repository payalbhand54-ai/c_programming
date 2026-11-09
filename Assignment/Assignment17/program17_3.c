////////////////////////////////////////////////////////////////////////
//     Funtion name :    Pattern
//     Description  :    accept number of rows and column and display below patttern 
//     Input        :    iRow =4  iCol = 4
//     Output       :    a  b   c   d
//                       1  2   3   4
//                       a  b   c   d
//                       1  2   3   4
//     Author       :    Payal machhindra bhand
//     Date         :    09/11/2026
// 
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int i, j;
    char ch = 'a';

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            ch = 'a';
            for(j = 1; j <= iCol; j++)
            {
                printf("%c\t",ch);
                ch++;
            }
        }
        else
        {
            for(j = 1; j <= iCol; j++)
                {
                    printf("%d\t",j);
                }  
        }
        printf("\n\n");
    }
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number og Rows and Column :");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;

}