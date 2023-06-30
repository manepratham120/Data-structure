#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node {
    int data;
    struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;
void enqueue(int val);
void dequeue();
void display();
int main()
{
   int ch,x;
   do
   {
    /* code */
    printf("\n **********menu*********");
    printf("\n 1.enqueue");
    printf("\n 2.dequeue");
    printf("\n 3.display");
    printf("\n Enter the choice =");
    scanf("%d",&ch);
    switch (ch)
    {
    case /* constant-expression */1:
                 printf("\n enter the value you want to insert =");
                 scanf("%d",&x);
                 enqueue(x);
                 break;

    case 2:
         dequeue();
         break;

    case 3:
        display();
        break;                  
    
    default:
        break;
    }
   } while (ch!=0);
   
}

void enqueue(int val)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node ));
    newnode->data=val;
    newnode->next=NULL;
    if(front==NULL&&rear==NULL)
    {
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}

void dequeue()
{
    struct node *temp;
    temp=front;
    if(front==NULL&&rear==NULL)
    {
        printf("\n UNDERFLOW");
    }
    else{
        front=front->next;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    if(front==NULL&&rear==NULL)
    {
        printf("\n UNDERFLOW");
    }
    else{
        temp=front;
        while(temp!=NULL)
        {
            printf("\t %d",temp->data);
            temp=temp->next;
        }
    }
}

