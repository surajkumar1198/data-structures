#include<stdio.h>
#include<conio.h>
#define MAXImum 10
int stack[MAXImum];
void Push(int stack[],int val);
int Pop(int stack[]);
int TOP;
void Push(int stack[],int val)
{
    if(TOP==MAXImum-1){
        printf("\nOVERFLOW\n");
        }
        else{
            TOP=TOP+1;
            stack[TOP]=val;
        }}

int Pop(int stack[])
{
    int val1;
    if(TOP==-1)
    {
        printf("\nUNDERFLOW\n");
        return -1;
    }
    else{
        val1=stack[TOP];
        TOP--;
        return val1;
    }
}
void display(int stack[])
{   
int i;
    if(TOP==-1)
    {
        printf("\nLIST is EMPTY");
    }
    for( i=TOP;i>=0;i--)
    {
        printf("  %d  ",stack[i]);
    }
}
int menu()
{
    int choice;
    printf("\n************MAIN MENU*******************\n");
    printf("\n1.PUSH");
    printf("\n2.POP");
    printf("\n3.DISPLAY");
    printf("\n4.EXIT");
    printf("\nEnter your choice \n");
    scanf("%d",&choice);
    return choice;

}
int main()
{
    TOP=-1;
    int val;
    while(1)
    {
        switch(menu())
        {
        case 1:
            printf("\nEnter value to push on stack = ");
            scanf("%d",&val);
            Push(stack,val);
            break;
        case 2:
            val=Pop(stack);
            printf("Deleted element from stack = %d",val);
            break;
        case 3:
            printf("\nAfter pushing and poping");
            display(stack);
            break;
        case 4:
            exit (0);

        }
    }
}

