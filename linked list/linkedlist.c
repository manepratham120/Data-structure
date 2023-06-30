#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    /* data */
    int data;
    struct node *next;
};

struct node *start=NULL;
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete(struct node *);
struct node *delete_end(struct node *);
struct node *display(struct node *start);

int main()
{
   int ch;
  do
  {
    /* code */
    printf("\n **********MENU***********");
    printf("\n0.exit");
    printf("\n1.insert from beginning");
    printf("\n2.insert from end");
    printf("\n3.insert from before the node");
    printf("\n4.insert from after the node");
    printf("\n5.delete from beginning");
    printf("\n6.delete from the end");
    printf("\n7.display linked list ");
    printf("\n Enter the choice =");
    scanf("%d",&ch);

    switch (ch)
    {
    case /* constant-expression */1:
        /* code */start=insert_beg(start);
        break;
    
    case 2: 
       start=insert_end(start);
       break;

    case 3:
        start=insert_beg(start);
        break;

    case 4:
       start=insert_after(start);
       break;

     case 5:
         start=delete(start);
         break; 

    case 6:
       start=delete_end(start);
       break;
    
    case 7:
        start=display(start);
        break;
    default:
    printf("\n Invalid choice ");
        break;
    }
  } while (ch!=0);
  

}
struct node *insert_beg(struct node *start)
{
    int num;
    struct node *newnode;
    printf("\n Enter the data=");
    scanf("%d",&num);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=start;
    start=newnode;
    return start;
}

struct node *insert_end(struct node *start)
{
    int num;
    struct node *newnode ,*ptr;
    printf("\n Enter the data =");
    scanf("%d",&num);
    newnode=(struct node *)malloc(sizeof(struct node*));
    newnode->data=num;
    newnode->next=NULL;
    ptr=start;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=newnode;
    return start;
}

struct node *insert_before(struct node *start)
{
    int num,val;
    struct node *preptr,*ptr,*newnode;
    printf("\n Enter the data=");
    scanf("%d",&num);
    printf("\n Enter the value you want to add before ");
    scanf("%d",&val);
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    ptr=start;
    while(ptr->data!=val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=newnode;
    newnode->next=ptr;
}

struct node *insert_after(struct node *start)
{
    int num,val;
    struct node *preptr,*ptr,*newnode;
    printf("\n enter the data =");
    scanf("%d",&num);
    printf("\n Enter the data you want ot add before ");
    scanf("%d",&val);
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    ptr=start;
    preptr=ptr;
    while(ptr->data!=val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=newnode;
    newnode->next=ptr;
}

struct node *delete(struct node *start)
{
    struct node *ptr;
    ptr=start;
    start=start->next;
    free(ptr);
    return start;
}

struct node *delete_end(struct node *start)
{
    struct node *ptr,*preptr;
    ptr=start;
    while(ptr->next!=NULL)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=NULL;
    free(ptr);
    return start;
}

struct node *display(struct node *start)
{
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        printf("\t %d",ptr->data);
        ptr=ptr->next;
    }
    return start;
}