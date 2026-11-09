///////////////////////////////////////////////////
//     Funtion name :    Pattern
//     Description  :    accept number of rows and column and display below patttern 
//     Input        :    iRow =4  iCol = 4
//     Output       :    4  4   4   4
//                       3  3   3   3
//                       2  2   2   2
//                       1  1   1   1
//     Author       :    Payal machhindra bhand
//     Date         :    09/11/2026
// 
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;
    int iCnt = 0;

    for(i = 1, iCnt = 4; i <= iRow; i++,iCnt--)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iCnt);
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows and Columns :");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return EXIT_SUCCESS;
}