// create program to store 5 student detail using array of structure
#include <stdio.h>
// #constant (read only variable)
#define SIZE 5
// create structure
struct Student
{
    // member variable
    char name[30]; //array within structure
    int age;
    float weight;
    char gender;
}; // 30+2+4+1 = 37
void main()
{
    // create structure type array of structure
    struct Student list[SIZE];
    int i;
    for (i = 0; i < SIZE; i++) // 0 1 2 3 4 5
    {
        // input
        printf("Enter student name");
        gets(list[i].name);
        fflush(stdin);
        printf("\nEnter student age");
        scanf("%d", &list[i].age);
        fflush(stdin);
        printf("Enter student gender (m=male,f=female)");
        scanf("%c", &list[i].gender);

        printf("Enter student weight");
        scanf("%f", &list[i].weight);
        fflush(stdin);
    }
    i=0;
    printf("\n%30s %10s %10s %10s  \n","name","age","weight","gender");
    while(i<SIZE) //1<5
    {
        // display
        printf("%30s %10d %10.2f %10c \n ", list[i].name,list[i].age,list[i].weight,list[i].gender);
        i = i + 1;
    }
}