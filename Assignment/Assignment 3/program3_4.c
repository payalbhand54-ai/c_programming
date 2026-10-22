////////////////////////////////////////////
//Function Name:DisplayConvert
//Discription:it is used to convert charcter into loweer_case or upper_case 
//Input: Char
//Output:Char
//Date:21/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////

#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", toupper(cValue));
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c" , tolower(cValue));
    }

}
int main()
{
    char cValue;

    printf("Enter Character :\n");
    scanf("%c" , &cValue);

    DisplayConvert(cValue);

    return 0;
}