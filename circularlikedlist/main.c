#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*next;
};
struct node*start;
void create(int n);
void display();
void insert_atbeginining();
void insert_atend();
void insert_atanypos();
void delete_atbeginining();
void create(int n)
{   int i;
    struct node*new_node,*ptr,*temp;
    for(i=0;i<n;i++)
    {
     new_node=(struct node*)malloc(sizeof(struct node)) ;
     printf("\nEnter data you want to insert at %d =  ",i+1);
     scanf("%d",&new_node->data);
     if(start==NULL)
     {
         new_node->next=NULL;
         start=new_node;
     }
     else
         {
             if(i==1)
             {
                 ptr=start;
             }
             else{
                ptr=temp;
             }
             ptr->next=new_node;
             ptr=ptr->next;
             temp=ptr;
             if(i==n-1)
             {
                 ptr->next=start;
             }

     }
    }
}
void display()
{
    struct node*ptr;
    ptr=start;
    printf("\nList =");
    do
    {
        printf("   %d   ",ptr->data);
        ptr=ptr->next;
    }while(ptr!=start);

}
insert_atbeginning()
{
    struct node*new_node,*ptr;
    ptr=start;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data you want to insert at beginning = ");
    scanf("%d",&new_node->data);
    new_node->next=ptr;
    while(ptr->next!=start)
    {
     ptr=ptr->next;
    }
    ptr->next=new_node;
    start=new_node;
}
void insert_atend()
{
    struct node*new_node,*ptr;
    ptr=start;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data you want to insert at last = ");
    scanf("%d",&new_node->data);
    while(ptr->next!=start)
    {
        ptr=ptr->next;
    }
    ptr->next=new_node;
    new_node->next=start;

}
void insert_atanypos()
{
    int i,pos;
    struct node*new_node,*ptr;
    new_node=(struct node*)malloc(sizeof(struct node));
    ptr=start;
    printf("\nEnter position at which you want to insert element =  ");
    scanf("%d",&pos);
    printf("\nEnter data you want to insert =  ");
    scanf("%d",&new_node->data);
    for(i=0;i<pos-2;i++)
    {
        ptr=ptr->next;
    }
    new_node->next=ptr->next;
    ptr->next=new_node;

}
void delete_atbeginining()
{
    struct node*ptr,*temp;
    ptr=start;
    temp=start;
    while(ptr->next!=start)
    {
        ptr=ptr->next;
    }
    temp=temp->next;
    start=temp;
    ptr->next=start;
}
int main()
{
    start=NULL;
    int n;
    printf("\nEnter number of nodes you want to create = ");
    scanf("%d",&n);
    create(n);
    display();
    insert_atbeginning();
    display();
    insert_atend();
    display();
    insert_atanypos();
    display();
    delete_atbeginining();
    display();
    return 0;
}
