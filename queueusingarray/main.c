#include<stdio.h>
#include<conio.h>
#define max 20
int Queue[max];
int front=-1,rear=-1;
void insertatrear(int Queue[],int val);
int deleteatfront(int Queue[]);
void Display();
void insertatrear(int Queue[],int val)
{
    if(rear==max-1)
    {
        printf("\nOVERFLOW\n");
    }
    else if(rear==-1&&front==-1)
    {
        rear=0;
        front=0;
    }
    else{
        rear=rear+1;
    }
    Queue[rear]=val;
}
int deleteatfront(int Queue[])
{   int val;
    if(front==-1||front>rear)
    {
        printf("\nUNDERFLOW\n");
        return -1;
    }
    else
    {
        val=Queue[front];
        front=front +1;
    }
    return val;
}
void Display()
{
    int i;
    if(front==-1||front>rear)
    {
        printf("\nQueue is empty\n");
    }
    else{
        printf("\nElements of Queue are\n");
        for(i=front;i<=rear;i++)
        {
            printf("  %d  ",Queue[i]);
        }
    }
}
int menu()
{
    int choice;
    printf("\n******************MAIN MENU**********************\n");
    printf("\n1.Insert element in queue");
    printf("\n2.Delete element from queue");
    printf("\n3.Display");
    printf("\n4.Exit");
    scanf("%d",&choice);
    return choice;

}
int main()
{
    int val1,val;
    while(1)
    {
        switch(menu())
        {
     case 1:
        printf("\nEnter value you want to insert in queue = ");
        scanf("%d",&val);
        insertatrear(Queue,val);
        break;
     case 2:
        val1=deleteatfront(Queue);
        printf("\nDeleted value from Queue = %d ",val1);
        break;
     case 3:
        Display();
        break;
     case 4:
        exit (0);
        }
    }
}
