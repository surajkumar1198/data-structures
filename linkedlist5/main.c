#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node*next;
};
struct node*start;
void create(int n);
void insert_begining();
void insert_end();
void insert_atanypos();
void delete_begining();
void delete_end();
void delete_atanypos();
void display();
void sorting();
void reverse();
void create(int n)
{   struct node*new_node,*ptr,*temp;
    int i;
    for( i=0;i<n;i++){
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data of node %d  = ",i+1);
        scanf("%d",&new_node->data);
        if(start==NULL)
        {
            new_node->next=NULL;
            start=new_node;
        }
        else{
            if(i==1){
			ptr=start;}
			else{ptr=temp;
			}

			   ptr->next=new_node;

                new_node->next=NULL;

				ptr=ptr->next;
				temp=ptr;
				}



    }}
    void display(){
    struct node*ptr;
    ptr=start;
    printf("\nlist is ");
    while(ptr!=NULL)
    {
        printf("  %d  ",ptr->data);
        ptr=ptr->next;

    }
    printf("\n");
    }


void insert_begining()
{
	struct node*new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter element to insert at first = ");
	scanf("%d",&new_node->data);
	if(start==NULL){printf("\n List empty");
	}
	else {
	new_node->next=start;
	start=new_node;}
}
void insert_end()
{
	struct node*new_node,*ptr;
	ptr=start;
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter element to insert at last = ");
	scanf("%d",&new_node->data);
		if(start==NULL){printf("\n List empty");
	}
	else {
	new_node->next=NULL;
	while(ptr->next!=NULL)
	{
	  ptr=ptr->next;
	}
	ptr->next=new_node;}}
	void insert_atanypos()
	{
		struct node*new_node,*ptr;
		int value;
		printf("\nEnter the data after which you want to insert new data = ");
		scanf("%d",&value);
		new_node=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter element to insert = ");
		scanf("%d",&new_node->data);
		ptr=start;
			if(start==NULL)
			{
			printf("\n List empty");
	        }
		else {
		while(ptr->data!=value)
		{
			ptr=ptr->next;
		}
		new_node->next=ptr->next;
		ptr->next=new_node;
	}}
	void delete_begining()
	{
		struct node*ptr;
		ptr=start;
			if(start==NULL)
			{
			printf("\n List empty");
	        }
		else
		{
		start=ptr->next;
		free(ptr);
	}}
	void delete_end()
	{
		struct node*ptr,*preptr;
		ptr=start;
			if(start==NULL){printf("\n List empty");
	}
		else {
		while(ptr->next!=NULL)
		{
			preptr=ptr;
			ptr=ptr->next;
		}
		preptr->next=NULL;
		free(ptr);
	}}
	void delete_atanypos()
	{
		struct node*ptr,*preptr;
		int value;
		printf("\nEnter the data which you want to delete = ");
		scanf("%d",&value);
		ptr=start;
			if(start==NULL){printf("\n List empty");
	}
		else {
		while(ptr->data!=value)
		{
			preptr=ptr;
			ptr=ptr->next;
		}
		preptr->next=ptr->next;
		ptr->next=NULL;
		free(ptr);

	}}
	void sorting()
	{
	    struct node*temp1,*temp2;
	    int temp;
	    temp1=start;

	    while(temp1!=NULL)
        {
            temp2=temp1->next;
            while(temp2!=NULL)
            {
                if(temp1->data>temp2->data)
                {
                    temp=temp2->data;
                    temp2->data=temp1->data;
                    temp1->data=temp;
                }
                temp2=temp2->next;
            }
            temp1=temp1->next;
        }

	}
	void reverse()
	{
		struct node*next,*current,*prev;
		current=start;
		prev=NULL;
		next=NULL;
		while(current!=NULL)
		{
			 // Store next 
            next = current->next; 
  
            // Reverse current node's pointer 
            current->next = prev; 
  
            // Move pointers one position ahead. 
            prev = current; 
            current = next; 
		}
		start=prev;
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
    printf("\n9.Sorting");
    printf("\n10.reverse");
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
         case 9:
            sorting();
            break;
            case 10:
            	reverse();
            	break;
         default:
         	printf("\n INVALID CHOICE");

	}}

    return 0;

}
