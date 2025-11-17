#include<stdio.h>
void main()
{
    //name,surname,address
    char name[32],surname[32],address[512];
    //input
    printf("Enter your name");
    scanf("%s",name); //cant give space
    printf("Enter your surname");
    scanf("%s",surname);
    printf("Enter your address");
    fflush(stdin);
    gets(address); //with space string can be inputed 

    //display 
    printf("name = %s ",name);
    printf("\nsurname = %s \n address ",surname);
    puts(address);
}