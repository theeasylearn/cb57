// example of 2d array
// write a program to store 5 students 3 subject marks also store total of each student, also store average of each and then display it
#include <stdio.h>
#define ROW 5
#define COLUMN 5
void main()
{
    float marks[ROW][COLUMN];
    int r, c;
    for (r = 0; r < 5; r++) //outer loop
    {
        printf("Enter %d student marks\n", r + 1);
        for (c = 0; c < 3; c++) //inner loop
        {
            printf("Enter %d subject marks", c + 1);
            scanf("%f",&marks[r][c]);
        }

        marks[r][3] = marks[r][0] + marks[r][1] + marks[r][2];
        marks[r][4] = marks[r][3] / 3; 
        //write a code to calculate total & average
    }
    //write a code to marks & total & average
    for (r = 0; r < 5; r++) //outer loop
    {
        for (c = 0; c < 5; c++) //inner loop
        {
            printf("%8.2f  ",marks[r][c]);
        }
        printf("\n");
    }
}