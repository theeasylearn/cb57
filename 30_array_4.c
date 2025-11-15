// write a program to findout maximum value from array
#include <stdio.h>
//create constant (read only variable)
#define SIZE 10
void main()
{
    // array declare with initilize
    int total[SIZE] = {
        150, 145, 160, 200, 149,
        250, 220, 300, 280, 350,
    };
    int max = total[0];
    // 1 to 4

    for (int index = 1; index < SIZE; index++)
    {
        if (total[index] > max) // 145>150
            max = total[index];
    }

    printf("maximum marks = %d", max);
}