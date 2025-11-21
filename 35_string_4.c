// write a reverse check whether given string is palindrom or not
// line = madam
// reverse = madam
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
    index = 0;
    while (count >= 0)
    {
        reverse[index] = line[count];
        count--; // 3
        index++;
    }
    reverse[index] = '\0'; // store null at last position
    count = strlen(line);
    index = 0;
    while (index < count)
    {
        // printf("%d",index);
        if (line[index] != reverse[index])
        {
            printf("\n this is not palindrom");
            break;
        }
        index++;
    }
    if(index == count)
        printf("\n given line is palindrom");
}