// write a reverse given string in other and display it
// line = apple
// reverse = elppa
#include <stdio.h>
#include <string.h>
void main()
{
    char line[32], reverse[32];
    int count = 0, index = 0;
    printf("Enter one line");
    gets(line);
    printf("line = %s", line);
    count = strlen(line);
    printf("\n count = %d", count);
    count = count - 1;

    while (count >= 0)
    {
        reverse[index] = line[count];
        count--; // 3
        index++;
    }
    reverse[index] = '\0'; //store null at last position
    printf("\n reverse = %s",reverse);
}