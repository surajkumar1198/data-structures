#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
   int data;
   struct node *next;
};
struct node *head=NULL;
void create();
void show();
void ins_beg();
void ins_mid();
void ins_end();
void del_beg();
void del_mid();
void del_end();
void sort();
int main()
{

   head=(struct node*)malloc(sizeof(struct node));
   head->next=NULL;
   int choice,c=1;
   create();
   while(c)
  {
   printf("enter 1 to insert at beg,2 to insert at end,3 to insert at mid,4 to delete at beg,5 to delete at end,6 to delete at mid,7 to sort\n");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:ins_beg();
             break;
      case 2:ins_end();
             break;
      case 3:ins_mid();
             break;
      case 4:del_beg();
             break;
      case 5:del_end();
             break;
      case 6:del_mid();
             break;
      case 7:sort();
             break;
   }
   printf("enter 0 to exit,any other to continue\n");
   scanf("%d",&c);
  }
  getch();
  return 0;
}
void create()
{
  int n,i;
  struct node *temp,*temp1;

  printf("enter no of nodes\n");
  scanf("%d",&n);
  temp=head;
  for(i=1;i<=n;i++)
  {
      temp1=(struct node*)malloc(sizeof(struct node));
      temp1->next=NULL;
      printf("enter data\n");
      scanf("%d",&temp1->data);
      temp->next=temp1;
      temp=temp1;
   }
   show();
}
void show()
{
   struct node *temp=head->next;
   while(temp!=NULL)
   {
      printf("%d ",temp->data);
      temp=temp->next;
   }
   printf("\n");
}
void ins_beg()
{
   struct node* newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("enter data\n");
   scanf("%d",&newnode->data);
   newnode->next=head->next;
   head->next=newnode;
   show();
}
void ins_end()
{
   struct node *newnode,*temp;
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("enter data\n");
   scanf("%d",&newnode->data);
   newnode->next=NULL;
   temp=head->next;
   while(temp->next!=NULL)
        temp=temp->next;
   temp->next=newnode;
   show();
}
void ins_mid()
{
   int pos,c=1;
   struct node *newnode,*temp;
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("enter data\n");
   scanf("%d",&newnode->data);
   printf("enter position to insert\n");
   scanf("%d",&pos);
   temp=head->next;
   while(c!=pos-1)
   {
     temp=temp->next;
     c++;
   }
   newnode->next=temp->next;
   temp->next=newnode;
   show();
}
void del_beg()
{
   struct node *temp;
   temp=head->next;
   head->next=temp->next;
   free(temp);
   show();
}
void del_end()
{
   struct node *temp,*p;
   temp=head->next;
   while(temp->next!=NULL)
   {
      p=temp;
      temp=temp->next;
   }
   p->next=NULL;
   free(temp);
   show();
}
void del_mid()
{
     int pos,c=1;
     struct node *temp,*p;
     printf("enter position to delete\n");
     scanf("%d",&pos);
     temp=head->next;
     while(c!=pos-1)
      {
        p=temp;
        temp=temp->next;
        c++;
      }

      p->next=temp->next;
      temp->next=NULL;
      free(temp);
      show();
}
void sort()
{
   struct node *temp1,*temp2;
   int t;
   temp1=head->next;
   while(temp1!=NULL)
   {
      temp2=temp1->next;
      while(temp2!=NULL)
      {
         if((temp1->data)>(temp2->data))
         {
            t=temp1->data;
            temp1->data=temp2->data;
            temp2->data=t;
         }
         temp2=temp2->next;
      }
      temp1=temp1->next;
   }
   show();
}






