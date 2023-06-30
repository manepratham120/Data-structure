#include<stdio.h>
#include<ctype.h>
#define max 30
char stack[max];
int top=-1;

void push(char x);
int pop();
int priority(char x);

void push(char x)
{
    if(top==max-1)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

int pop()
{
    if(top==-1)
    {
        printf("\n UNDERFLOW");
    }
    else{
    return stack[top--];
    }
}

int priority(char x)
{
    if(x=='(')
    {
        return 0;
    }

    if(x=='+'||x=='-')
    {
        return 1;
    }
    if(x=='*'||x=='/')
    {
       return 2;
    }
}

int main()
{
    char exp[100];
    char *e,x;
    printf("\n Enter the expression=");
    scanf("%s",&exp);
    e=exp;
    while(*e!='\0') 
    {
        if(isalnum(*e))
        {
            printf("%c",*e);
        }
        else if(*e=='(')
        {
            push(*e);
        }
        else if(*e==')')
        {
            while((x=pop())!='(')
            {
                printf("%c",x);
            }
        }
        else{
            while(priority(stack[top])>priority(*e))
            {
                printf("%c",pop());
                
            }
            push(*e);
        }
        e++;
    }
    


while(top!=-1)
{
    printf("%c",pop());
}
return 0;

}
