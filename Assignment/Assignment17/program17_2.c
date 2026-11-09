////////////////////////////////////////////////////////////////////////
//     Funtion name :    Pattern
//     Description  :    accept number of rows and column and display below patttern 
//     Input        :    iRow =4  iCol = 4
//     Output       :    2  4  6   8   
//                       1  3  5   7  
//                       2  4  6   8
//                       1  3  5   7
//     Author       :    Payal machhindra bhand
//     Date         :    09/11/2026
// 
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int i = 0 , j = 0;
    int iCount = 1;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            iCount = 2;
        }
        else
        {
            iCount = 1;
        }
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iCount);
            iCount = iCount + 2;
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