
///////////////////////////////////////////////////
//      
//     Funtion name :    main()
//     Description  :    Full name accept from user
//     Input        :    Full name (string)
//     Output       :    Display Full name
//     Author       :    Payal machhindra Bhnad
//     Date         :    04/11/2026
// 
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[ 30 ];

    printf("please enter full name ");
    scanf("%[^'\n']s",&Name);

    printf("Your name is %s ",Name );

    return EXIT_SUCCESS;

}