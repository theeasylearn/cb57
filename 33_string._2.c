// write a program to count letter in string  & display it
// name = karan bhatt
// output : 11
#include <stdio.h>
void main()
{
    char name[32];
    int count = 0;
    printf("Enter your name");
    gets(name);
    printf("name = %s", name);
    for (int index = 0; index < 32; index++)
    {
        if (name[index] != '\0')
            count = count + 1;
        else
            break; // loop stop
    }
    printf("count = %d", count);
}