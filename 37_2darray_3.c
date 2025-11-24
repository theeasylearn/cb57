// example of 2d array
// write a program to make sum of 2 2d array into another 2d array
#include <stdio.h>
void main()
{
    // 2d array static initilization
    int a[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int b[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int c[3][3];
    int row, column;

    for (row = 0; row <= 2; row++)
    {
        for (column = 0; column <= 2; column++)
        {
            c[row][column] = a[row][column] + b[row][column];
        }
    }

    for (row = 0; row <= 2; row++)
    {
        for (column = 0; column <= 2; column++)
        {
            printf("%10d", c[row][column]);
        }
        printf("\n");
    }

}