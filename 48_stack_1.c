#include <stdio.h>
#define SIZE 5
/* write a program to implement concept of stack
    insert new item into stack
    delete existing item from stack
    display items from stack
   create menu driven program.

*/
// global variable (can be accessed and changed from all functions)
int top = -1;
// insert new item into stack
void push(int stack[], int item)
{
    if (top == SIZE - 1)
    {
        printf("\n stack overflow");
    }
    else
    {
        top++;
        stack[top] = item;
        printf("\n item pushed into stack");
    }
}
void pop(int stack[])
{
    if (top == -1)
    {
        printf("\n stack underflow");
    }
    else
    {
        stack[top] = 0;
        top--;
        printf("\n item poped from stack");
    }
}
void display(int stack[])
{
    // 4
    if (top == -1)
    {
        printf("\n stack is empty");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("\n %d", stack[i]); // 50
        }
    }
}

void main()
{
    int stack[SIZE];
    int choice, value;
    do
    {
        printf("\n press 1 to insert new item into stack (push)");
        printf("\n press 2 to delete top most item from stack (pop)");
        printf("\n press 3 to display all items from stack ");
        printf("\n press 4 to stop");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("Enter value to push into stack");
            scanf("%d", &value);
            push(stack, value); // call/execute
        }
        else if (choice == 2)
        {
            pop(stack);
        }
        else if (choice == 3)
        {
            display(stack);
        }
        else if (choice == 4)
        {
            printf("\n good bye...");
        }
        else
        {
            printf("invalid choice");
        }
    } while (choice != 4);
}