#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct queue {
    int size;
    int front;
    int rear;
    int *arr;
};
void enqueue(struct queue *q,int val);
void enqueue(struct queue *q, int val);
int isempty(struct queue *q);
int isempty(struct queue *q)
{
	if(q->front==q->rear)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void enqueue(struct queue *q,int val)
{

    
    if(q->rear==q->size-1)
    {
         printf("\n Queue is full");
    }
    else{
        q->rear++;
        q->arr[q->rear]=val;
    }
}

int dequeue(struct queue *q)
{
    int a=-1;
    if(q->front==q->rear)
    {
        printf("\n Queue is Empty");
    }
    else{
        q->front++;
        q->arr[q->front]=a;
    }
    return a;
}

int main()
{
    struct queue q;
    q.size=400;
    q.front=q.rear=0;
    q.arr=(int*)malloc(q.size*sizeof(int *));

    int node;
    int i=1;
    int j;
    int visited[5]={0,0,0,0,0};
    int a[5][5]={
         {0,1,0,1,0},
         {1,0,1,0,0},
         {0,1,0,1,1},
         {1,0,1,0,1},
         {0,0,1,1,0}
		 
    };
    printf("%d",&i);
    visited[i]=1;
    enqueue(&q,i);

    while(!isempty(&q))
    {
        int node =dequeue(&q);
        for(j=1;j<=5;j++)
        {
            if(a[node][j]=1&&visited[j]==0)
           {
                  printf("%d",j);
                  visited[j]=1;
                  enqueue(&q,j);
           }
        }
    
    }
   return 0;
}
