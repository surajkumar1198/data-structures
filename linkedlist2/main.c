#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
int data;
struct node*next;
};
int main()
{
struct node*n1,*n2,*n3,*p;
n1=(struct node*)malloc(sizeof(struct node));
n2=(struct node*)malloc(sizeof(struct node));
n3=(struct node*)malloc(sizeof(struct node));
printf("\n Enter data 1 = ");
scanf("%d",&n1->data);
printf("\nEnter data 2 = ");
scanf("%d",&n2->data);
printf("\nEnter data 3 = ");
scanf("%d",&n3->data);
n1->next=n2;
n2->next=n3;
n3->next=NULL;
p=n1;
while(p!=NULL)
{
    printf("\nEntered data = %d ",p->data);
    p=p->next;
}}
