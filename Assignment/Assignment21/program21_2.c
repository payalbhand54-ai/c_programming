////////////////////////////////////////////////////////
//     Funtion name :    Pattern
//     Description  :    accept number of rows and column and display below patttern 
//     Input        :    iRow =4  iCol =3
//     Output       :    1  2   3
//                       1  2   3
//                       1  2   3
//                       1  2   3
//     Author       :    Payal Machhindra Bhand
//     Date         :    14/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i , j;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",j);
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 , iValue2;

    printf("Enter number of Rows and Columns :");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}