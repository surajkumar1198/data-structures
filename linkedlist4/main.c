#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node*next;
};
struct node*start;
void create(int n)
{   struct node*new_node,*ptr,*temp;
    for(int i=0;i<n;i++){
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



       }
    ptr=start;
    printf("\nlist is ");
    while(ptr!=NULL)
    {
        printf("  %d  ",ptr->data);
        ptr=ptr->next;
    }

}
int main()
{    start=NULL;
    int n;
    printf("\nEnter number of nodes you want to insert = ");
    scanf("%d",&n);
    create(n);
    return 0;

}
