#include<stdio.h>
#define max 10

int stack[max];
int top=-1;
void push(int );
void pop();
void peek();
void display();

int main()
{
    int ch,val;
    do
    {
        /* code */
        printf("\n *****menu*****");
        printf("\n 0.exit");
        printf("\n 1.PUSH");
        printf("\n 2.POP");
        printf("\n 3.PEEK");
        printf("\n 4.DISPLAY");
        
        printf("\n Enter the choice =");
        scanf("%d",&ch);
        
        

        switch (ch)
        {
        case /* constant-expression */1:
            /* code */push(val);
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
             printf("\n INVALID CHOICE ");
             break;
        }
    } while (ch!=0);
    return 0;
}

void push(int val)
{
    
    printf("\n enter the data you want to enter =");
    scanf("%d",&val);
    if(top==max-1)
    {
        printf("\n OVERFLOW");
    }

    else{
        top++;
        stack[top]=val;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("\n UNDERFLOW");
    }
    else
    {
        top--;
        
    }
}

void peek()
{
    if(top==-1)
    {
        printf("\n UNDERFLOW");
    }
    else{
        printf("%d",stack[top]);
    }
}

void display()
{
    int i;
    if(top==-1)
    {
        printf("\n UNDERFLOW");
    }
    else{
        for(i=0;i<=top;i++)
        {
            printf("\t %d",stack[i]);
        }
    }
}
