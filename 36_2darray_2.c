// example of 2d array
// write a program to store 5 students 3 subject marks also store total of each student, also store average of each and then display it
#include <stdio.h>
void main()
{
    float marks[5][5];
    int row, column;
    for (row = 0; row < 5; row++) //outer loop
    {
        printf("Enter %d student marks\n", row + 1);
        for (column = 0; column < 3; column++) //inner loop
        {
            printf("Enter %d subject marks", column + 1);
            scanf("%d", &marks[row][column]);
        }
        //write a code to calculate total & average
    }
    //write a code to marks & total & average
    for (row = 0; row < 5; row++) //outer loop
    {
        for (column = 0; column < 3; column++) //inner loop
        {
            printf("%10d",marks[row][column]);
        }
        printf("\n");
    }
}