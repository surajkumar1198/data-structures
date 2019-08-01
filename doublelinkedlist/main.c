#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
    

};
struct node*start;
struct node*p;
void create(int a)
{ p=(struct node*)malloc(sizeof(struct node)) ;  
start=p;
	p->data=a;
	p->next=start;
	start->prev=p;
	
	
}
int main()
{    start=NULL;
    int n,a,i,start=NULL;
    printf("\nEnter number of nodes you want to create");
    scanf("%d",&n);
        for(i=0;i<n;i++)
    {
        printf("\n Enter data to insert in node ");
    scanf("%d",&a);
    create(a);
    }
    while(p!=NULL)
    {
    	printf("%d",p->data);
    	p=p->next;
	}


}


