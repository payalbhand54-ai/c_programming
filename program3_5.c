////////////////////////////////////////////
//Function Name:CheckVowel
//Discription:it is used to print vowels
//Input: Char
//Output:Char
//Date:21/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckVowl(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' 
        || cValue =='u' ||
        cValue =='A' || cValue == 'E' || cValue == 'I' || cValue == 'O' 
        || cValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
int main()
{
    char cValue = '\0';
    BOOL cRet = FALSE;

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    cRet = CheckVowl(cValue); 

    if(cRet == TRUE)
    {
        printf("It is vowel ");
    }
    else
    {
        printf("It is not vowel ");
    }
    
    return 0;
}