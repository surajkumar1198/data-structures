#include<stdio.h>
#include<conio.h>
#include<malloc.h>
    struct node
    {
        int data;
        struct node*next;
    };

    int main()
    {
        struct node*temp,*temp1,*temp2;
        temp=(struct node*)malloc(sizeof(struct node));
        temp1=(struct node*)malloc(sizeof(struct node));
        temp2=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data 1 = ");
        scanf("%d",&temp->data);
        printf("\nEnter data 2 = ");
        scanf("%d",&temp1->data);
        printf("\nEnter data 3 = ");
        scanf("%d",&temp2->data);
        printf("\ndata 1 =%d",temp->data);
           printf("\ndata 2 =%d",temp1->data);
              printf("\ndata 3 =%d",temp2->data);
    }



