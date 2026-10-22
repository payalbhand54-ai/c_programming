////////////////////////////////////////////
//Function Name:FindGreatest
//Discription:it is used to find greatest number
//             between given three number 
//Input: Int , Int , Int 
//Output:Int
//Date:22/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst , int iSecond , int iThird)
{
    if((iFirst >= iSecond) && (iFirst >= iThird))
    {
        printf("%d is greatest number ",iFirst);
    }
    else if((iFirst <= iSecond) && (iSecond >= iThird))
    {
        printf("%d is greatest number ",iSecond);
    }
    else
    {
         printf("%d is greatest number ",iThird);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Enter Three number :");
    scanf("%d %d %d", &iValue1 ,&iValue2 ,&iValue3 );


    FindGreatest(iValue1, iValue2, iValue3);


    return EXIT_SUCCESS;

}