#include<stdio.h>
#include<conio.h>
    struct node{
    int data;
    struct node*next;
    };
    struct node*n1,*head;
    int main()
    {
        struct node*head=NULL;
        int n;
        printf("\nEnter a number = ");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            n1=(struct node*)malloc(sizeof(struct node));
            printf("\Enter data = ");
            scanf("%d",&n1->data);
            if (head==NULL){
            n1->next=NULL;
            head=n1;}
            else
            {
                n1->next=head;
                head=n1;
            }


        }
        n1=head;
        while(n1!=NULL)
        {
            printf("%d",n1->data);
            n1=n1->next;
        }
        getch();

    }


