/* 
    definition : write a program to convert user given kilograms into grams 
    variable : kilogram, grams
    input: kilogram
    process : grams = kilogram * 1000
    output : display grams
*/
#include<stdio.h>
void main()
{
    float kg,grams;
    printf("Enter kilograms");
    scanf("%f",&kg);

    //process 
    grams = kg * 1000;

    //output
    printf("grams = %.2f",grams);
}