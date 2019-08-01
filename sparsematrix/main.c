#include<stdio.h>
#include<conio.h>
struct node
{
    int row;
    int column;
    struct node*row_next;
    struct node*column_next;
    int value;
};
int main()
{
    int m,n,i,Row,data,col;
    printf("\nEnter number of rows =  ");
    scanf("%d",&m);
    printf("\nenter number of columns = ");
    scanf("%d",&n);
    struct node*header;
    header=(struct node*)malloc(sizeof(struct node));
    if(header==NULL)
    {
        printf("\nspace full");
    }
    else
    {
        header->row=m;
        header->column=n;
        header->row_next=NULL;
        header->column_next=NULL;
        header->value=NULL;
    }
    //column making
    struct node*columnc,*ptr;
    ptr=header
    for(i=0;i<n;i++)
    {

       columnc=(struct node*)malloc(sizeof(struct node));
       columnc->row=0;
       columnc->column=i;
       columnc->value=NULL;
       ptr->row_next=columnc;
       columnc->row_next=header;
       columnc->column_next=columnc;
       ptr=columnc;

    }
    //row making
    struct node*rowc,*ptr;
    ptr=header;
    for(i=0;i<m;i++)
    {
        rowc=(struct node*)malloc(sizeof(struct node));
        rowc->column=0;
        rowc->row=i;
        rowc->value=NULL;
        ptr->column_next=rowc;
       rowc->column_next=header;
       rowc->row_next=rowc;
       ptr=rowc;
    }
    printf("\nEnter row data column");
    scanf("%d %d %d",&Row,&data,&col);
    struct node*rowheader,*colheader;
    while(Row<rowheader->row)
    {
        rowheader=rowheader->column_next;
    }
    while(col<colheader->column)
    {

    }


}
