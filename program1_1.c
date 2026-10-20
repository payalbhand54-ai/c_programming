////////////////////////////////////////////
//Function Name:Divide
//Discription:it is used to check first number is 
//             divisible by second number or not  
//Input: Int , int
//Output:Int
//Date:21/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>

int Divide(int iNo1,int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1/iNo2;

    return iAns;
}
int main()
{
    int iValue1 = 15 , iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1 , iValue2);

    printf("Division is : %d", iRet);


    return 0;
}