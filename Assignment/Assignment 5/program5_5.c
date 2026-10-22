////////////////////////////////////////////
// Function Name: CheckNumberType
// Description: It is used to determine whether
//              a character is uppercase, lowercase,
//              a digit, or a special character
// Input: Character
// Output: Void
// Date: 22/10/2026
// Author: Payal Machhindra Bhand
////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void CheckNumberType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase Alphabet");
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase Alphabet");
    }
    else if((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
}


int main()
{
    char cValue = '\0';

    printf("Enter character :");
    scanf("%c" , &cValue);

    CheckNumberType(cValue);

    return EXIT_SUCCESS;
}