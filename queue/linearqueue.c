#include<stdio.h>
#define max 10

int q[max];
int f=-1,r=-1;

void insert(void);
int delete(void);
void display(void);
int peek(void);

int main()
{
  int ch,val;
  do{

    printf("\n******menu*******");
    printf("\n 1.insert");
    printf("\n 2.delete");
    printf("\n 3.peek");
    printf("\n 4.display");
    printf("\n 5.exit");

    printf("\n Enter the choice ");
    scanf("%d",&ch);

    switch (ch)
    {
    case /* constant-expression */1:insert();
        /* code */
        break;
    
    case 2:
      
        val=delete();
        if(val!=-1)
        {
            printf("\n the number deleted is =%d",val);
        }
         break;

    
    case 3:peek();
        break;

    case 4:display();
          break;

    case 5:exit(0);
       break;     

    default:
        printf("\n Invalid choice ");
        break;
    }
  }while(ch!=5);
    return 0;


}

void insert()
{
    int x;
    printf("\n Enter the data you want to insert ");
    scanf("%d",&x);
    if(r==max-1)
    {
        printf("overflow");
    }
    else if(f==-1&&r==-1)
    {
        f=r=0;
    }
    else{
        r++;
        q[r]=x;
    }
}

int delete()
{
    int n;
    if(f==-1||r==-1)
    {
        printf("underflow");
    }
    else{
        n=q[f];
        f++;
        if(f>r)
        {
            f=r=-1;

        }
        return n;

    }
}

void display()
{
    int i ;
    if(f==-1||f>r)
    {
        printf("\n queue is empty");
    }
    else{
        for(i=f;i<=r;i++)
        {
            printf("%d",q[i]);
        }
    }

}

int peek()
{
    if(f==-1||f>r)
    {
        printf("\n Queue is Empty");
    }
    else{
        return q[f];
        printf("%d",q[f]);
    }
}