/* write a program to reverse 2 digit given number 
   input : 75 output : 57 
   input : 26 output : 62 
   input : 18 output : 81 
   
   variable : number,last, first,reverse
   input: number
   
   process : 
   get 2nd digit of number, store in variable last
   get 1st digit of number, store in variable first
   combine last variable and first variable into reverse

   output
   reverse
*/
#include<stdio.h>
void main()
{
   int amount,first,last,reverse;
   printf("Enter amount");
   scanf("%d",&amount); //45

   last = amount%10; //5
   first = amount/10; //4
   reverse = (last * 10) + first; //54
   printf("reverse = %d",reverse);
}