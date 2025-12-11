#include <stdio.h>
#define SIZE 5
/*
    write a program to implement concept of queue (FIFO)
    insert new item into queue (Enqueue)
    delete existing item from queue (Dequeue)
    display items from queue
    Peek / Front (get the front element without removing it)
    Count elements (excercise)
    create menu driven program.
*/
// global variable (can be accessed and changed from all functions)
int front = -1, rear = -1;
// insert new item into queue (Enqueue)
void Enqueue(int queue[], int item)
{
    if (front == -1 && rear == -1)
    {
        front = 0; // chain assignment
    }
    else if (rear == SIZE - 1)
    {
        printf("Queue is Overflow(full)");
        return; // function stop
    }
    rear++;
    queue[rear] = item;
    printf("\n item inserted into queue");
}
// delete existing item from queue (Dequeue)
void Dequeue(int queue[])
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is underflow(empty)");
        return;
    }
    else if (front > rear)
    {
        printf("Queue is underflow(empty) \n reset");
        front = rear = -1;
        return;
    }
    else
    {
        queue[front] = 0;
        front++;
        printf("\nitem removed from queue");
    }
}
//  display items from queue
void display(int queue[])
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty");
        return; // function stop
    }
    for (int i = front; i <= rear; i++)
    {
        printf("%6d", queue[i]); // 100
    }
}

void main()
{
    int queue[SIZE];
    int choice, value;
    do
    {
        printf("\n press 1 to insert new item into quque (Enqueue)");
        printf("\n press 2 remove item from quque (dequeue)");
        printf("\n press 3 to display all items from quque ");
        printf("\n press 4 to stop");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("Enter value insert new item into quque");
            scanf("%d", &value);
            Enqueue(queue, value);
        }
        else if (choice == 2)
        {
            Dequeue(queue);
        }
        else if (choice == 3)
        {
            display(queue);
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