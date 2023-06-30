#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node *link;
};

struct node *top=0;

int push(int x);
int pop();
int peek();
int display();

int main()
{
    int val,i,x;
    int choice ;
    do
    {
      printf("\n ****menu*****");
      printf("\n 1.push");
      printf("\n 2.pop");
      printf("\n 3.peek");
      printf("\n 4.display");
      printf("\n 5. Exit");
      printf("\n Enter the choice =");
      scanf("%d",&choice);

      switch (choice)
      {
      case 1:
      printf("Enter the data you wanna insert=");
      scanf("%d",&val);
      push(x);
        /* code */
      break;

       case 2:
       pop();
       break; 
       
       case 3:
       peek();
       break;
       	

       case 4:
       display();
       break;
      
      default:
      printf("\n Invalid choice ");
        break;
      }
        /* code */
    } while (choice!=5);
    
  return 0;
}

int push(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}

int display()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("undeflow");
    }
    else
    {
        while (temp!=0)
        {
            printf("%d",temp->data);
            temp=temp->link;
        }
        
    }
}

int peek()
{
    if(top==NULL)
    {
        printf("undeflow");
    }
    else{
        printf("%d",top->data);
    }
}

int pop()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
      printf("underflow");
    }
    else
    {
        printf("%d",top->data);
        top=top->link;
        free(temp);
    }
}
