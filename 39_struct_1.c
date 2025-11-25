#include <stdio.h>
// create structure
struct Student
{
    // member variable
    char name[30];
    int age;
    float weight;
    char gender;
}; // 30+2+4+1 = 37
void main()
{
    // create structure type variable
    struct Student s1;

    // input
    printf("Enter student name");
    gets(s1.name);
    fflush(stdin);
    printf("Enter student age");
    scanf("%d", &s1.age);
    fflush(stdin);
    printf("Enter student gender (m=male,f=female)");
    scanf("%c", &s1.gender);

    printf("Enter student weight");
    scanf("%f", &s1.weight);

    // display
    printf("\n Student Name %s ", s1.name);
    printf("\n Student age %d", s1.age);
    printf("\n Student weight %.2f", s1.weight);
    printf("\n Student gender %c", s1.gender);

    struct Student s2;
    fflush(stdin);
    printf("Enter student name");
    gets(s2.name);
    fflush(stdin);
    printf("Enter student age");
    scanf("%d", &s2.age);
    fflush(stdin);
    printf("Enter student gender (m=male,f=female)");
    scanf("%c", &s2.gender);

    printf("Enter student weight");
    scanf("%f", &s2.weight);

    // display
    printf("\n Student Name %s ", s2.name);
    printf("\n Student age %d", s2.age);
    printf("\n Student weight %.2f", s2.weight);
    printf("\n Student gender %c", s2.gender);


}