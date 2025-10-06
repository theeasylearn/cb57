/* write a program to convert given minutes into hours and remaining minutes.
    input : minutes  130  output : 2 hours 10 minutes
    input : minutes  75  output : 1 hours 15 minutes 
    process : hours = minutes / 60 
              minutes = minutes % 60
    output : hours minutes  
*/
#include<stdio.h>
void main()
{
    int minutes,hours;
    printf("Enter total minutes");
    scanf("%d",&minutes);

    //process
    hours = minutes/60;  //because both variable & value is integer result will be also integer 
    minutes = minutes%60; // % modulas operator return reminder 

    //output
    printf("hours = %d minutes = %d",hours,minutes);
    
}
