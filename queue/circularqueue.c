#include<stdio.h>
#define max 10
int q[max];
int f=-1,r=-1;

void insert(void);
int delete(void);
void display(void);
int main()
{
  int ch,val,x;
  do{

    printf("\n******menu*******");
    printf("\n 1.insert");
    printf("\n 2.delete");
    printf("\n 3.display");
    printf("\n 4.exit");

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

    


    case 3:display();
          break;
    

    default:
        printf("\n Invalid choice ");
        break;
    }
  }while(ch!=5);
   


}

void insert()
{
    int x;
    printf("\n Enter the number you want to insert=");
    scanf("%d",&x);

    if(f==0&&r==max-1)
    {
        printf("\n overflow");
    }
    else if(f==-1&&r==-1)
    {
        f=r=0;
        q[r]=x;
    }
    else if (r=max-1&&f!=0)
    {
        r=0;
        q[r]=x;

    }
    else{
       r++;
       q[r]=x;
    }
}


int  delete()
{
    int n;
    if(f==-1&&r==-1)
    {
        printf("\n UNDERFLOW");
    }
    n=q[f];
    if (f==r)
    {
        f=r=-1;
    }
    else{
        if(f==max-1)
        {
            f=0;
        }
        else{
            f++;
        }
    }
    return n;
}

void display()
{
    int i;
    if(f==-1&&r==-1)
    {
        printf("\nUNDERFLOW");
    }
    else 
    {
        if(f<r)
        {
            for(i=f;i<=r;i++)
            {
              printf("\n %d",q[i]);
            }   
        }
        else{
            for(i=f;i<max;i++)
            {
                printf("\n %d",q[i]);
            }
            for(i=0;i<=r;i++)
            {
                printf("\n %d",q[i]);
            }
        }

    }
}
