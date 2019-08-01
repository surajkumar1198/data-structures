#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node*next;
};
struct node*TOP;
void push(int val);
int pop();
void Display();

void push(int val)
{
    struct node*newnode,*ptr;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    if(newnode==NULL)
    {
        printf("\nstack overflow");
    }
    if(TOP==NULL)
    {
        newnode->next=NULL;
        TOP=newnode;
    }
    else
    {
        newnode->next=TOP;
        TOP=newnode;
    }

}
int pop()
{
    int val;
    struct node*ptr;
    if(TOP==NULL)
    {
        printf("\nUNDERFLOW");
    }
    else{
    ptr=TOP;
    val=ptr->data;
    TOP=TOP->next;
    free(ptr);
    return val;}

}
void Display()
{
  struct node*ptr;
  ptr=TOP;
  if(TOP==NULL)
  {
      printf("\nStack empty\n");
  }
  else{
  while(ptr!=NULL)
  {
      printf(" %d " ,ptr->data);
      ptr=ptr->next;
  }}
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
    TOP=NULL;
    int val;
    while(1)
    {
        switch(menu())
        {
        case 1:
            printf("\nEnter value to push on stack = ");
            scanf("%d",&val);
            push(val);
            break;
        case 2:
            val=pop();
            printf("\nDeleted element from stack = %d",val);
            break;
        case 3:
            printf("\nAfter pushing and poping\n");
            Display();
            break;
        case 4:
            exit (0);

        }
    }
}
