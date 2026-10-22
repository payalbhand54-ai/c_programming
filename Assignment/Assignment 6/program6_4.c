#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////
// Function Name: CheckTringle
// Description: It is used to determine whether 
//               they can form valid triangle
// Input: Int ,Int ,Int
// Output: Int
// Date: 22/10/2026
// Author: Payal Machhindra Bhand
////////////////////////////////////////////

void CheckTriangle(int iSide1,int iSide2 ,int iSide3)
{
    if((iSide1 > 0) && (iSide2 > 0) && (iSide3 > 0))
    {
        if(((iSide1 + iSide2) > iSide3) && ((iSide2 + iSide3) > iSide1) 
        && ((iSide1 + iSide3) > iSide2 )) 
        {
            printf("Valid Triangle");
        }
        else
        {
            printf("Invalid Triangle ");
        }
    }
    else
    {
        printf("Invalid Input");
    } 
   
}

int main()
{
    int iSide1 = 0 ,iSide2 =0 ,iSide3 =0;
    
    printf("Enter three side :");
    scanf("%d %d %d", &iSide1, &iSide2 ,&iSide3);

    CheckTriangle(iSide1, iSide2 ,iSide3);
    return EXIT_SUCCESS;
}