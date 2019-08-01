#include<stdio.h>
#include<conio.h>
struct node
{   struct node*prev;
    int data;
    struct node*next;
};
struct node*start;
void create(int n);
void display();
void insert_begining();
void insert_end();
void insert_atanypos();
void delete_begining();
void delete_end();
void delete_atanypos();
void create(int n){
int i;
struct node*ptr,*temp,*new_node;
for(i=0;i<n;i++)
{   new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data of %d node = ",i+1);
    scanf("%d",&new_node->data);
    if(start==NULL)
    {
        start=new_node;
        new_node->next=NULL;
        new_node->prev=NULL;
    }
    else{
        if(i==1){ptr=start;}
        else{
            ptr=temp;
        }
        ptr->next=new_node;
        new_node->prev=ptr->next;
        new_node->next=NULL;
        ptr=ptr->next;
        temp=ptr;
    }
}}
void display()
{ struct node*ptr;
printf("\n list is ");
ptr=start;
while(ptr!=NULL)
{
    printf("   %d    ",ptr->data);
    ptr=ptr->next;
}
printf("\n");
}
void insert_begining()
{
    struct node*ptr;
    struct node*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to insert at first = ");
    scanf("%d",&new_node->data);
    new_node->prev=NULL;
    ptr=start;
    new_node->next=ptr;
    ptr->prev=new_node;
    start=new_node;
    }
    void insert_end()
    {
        struct node*ptr;
        struct node*new_node;
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data you want to insert at last = ");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new_node;
        new_node->prev=ptr;

    }
    void insert_atanypos()
    {   int value;
        struct node*new_node;
        struct node*ptr;
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data after which you want to insert = ");
        scanf("%d",&value);
        printf("\nEnter data you want to insert = ");
        scanf("%d",&new_node->data);
        ptr=start;
        while(ptr->data!=value)
        {
            ptr=ptr->next;
        }
        new_node->next=ptr->next;
        ptr->next=new_node;
        new_node->prev=ptr;
        ptr->next->prev=new_node;
    }
    void delete_begining()
    {
        struct node*ptr;
        ptr=start;
        ptr->next->prev=NULL;
        start=ptr->next;
        ptr->next=NULL;
        free(ptr);

    }
    void delete_end()
    {
        struct node*ptr,*preptr;
        ptr=start;
        preptr=ptr;
        while(ptr->next!=NULL)
        {
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=NULL;
        ptr->prev=NULL;
        free(ptr);

    }
    void delete_atanypos(){
        int value;
    struct node*ptr,*preptr;
    printf("\nEnter data you want to delete = ");
    scanf("%d",&value);
    ptr=start;
    while(ptr->data!=value)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    ptr->next->prev=preptr;
    ptr->next=NULL;
    ptr->prev=NULL;
    free(ptr);
    }
int menu()
	{
	    int choice;
    printf("**************MAIN MENU*****************");
    printf("\n1. Create  linked list ");
    printf("\n2.Insert element at begining ");
    printf("\n3.Insert element at last ");
    printf("\n4.Insert element at any position ");
    printf("\n5.Delete element at begining ");
    printf("\n6.Delete element at end ");
    printf("\n7.Delete element at any position");
    printf("\n8.Display list ");
    printf("\nchoose an option =  ");
    scanf("%d",&choice);
    return choice;

	}
int main()
{   int n;
    start=NULL;
      while(1)
        {
        switch(menu())
        {
    	case 1:

         printf("\nEnter number of nodes you want to insert = ");
         scanf("%d",&n);
         create(n);
         break;
         case 2:
         insert_begining();
         break;
         case 3:
         insert_end();
         break;
         case 4:
         insert_atanypos();
         break;
         case 5:
         delete_begining();
         break;
         case 6:
         delete_end();
         break;
         case 7:
         delete_atanypos();
         break;
         case 8:
         display();
         break;
         default:
         	printf("\n INVALID CHOICE");

	}}

    return 0;

}
