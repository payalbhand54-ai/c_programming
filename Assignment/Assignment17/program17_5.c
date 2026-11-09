////////////////////////////////////////////////////////////////////////
//     Funtion name :    Pattern
//     Description  :    accept number of rows and column and display below patttern 
//     Input        :    iRow =4  iCol = 4
//     Output       :    1  2   3   4
//                       2  3   4   5
//                       3  4   5   6
//                       4  5   6   7
//     Author       :    Payal machhindra bhand
//     Date         :    09/11/2026
// 
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int i , j;

    for(i = 1; i <= iRow; i++)
     {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",(i+j-1));

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