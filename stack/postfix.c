#include<stdio.h>
#include<ctype.h>
#define max 100
float stack[max];
int top=-1;
 
void push(int);
float  pop();
float evaluatepostfix(char exp[]);
int main()
{   
float val;
char exp[100];
printf("\n Enter the postfix expresion");
gets(exp);
val=evaluatepostfix(exp);
printf("\n the result=%.2f",val);
return 0;
}

void push(int val)
{
    
    if(top==max-1)
    {
        printf("\n OVERFLOW");
    }
    else{
        top++;
        stack[top]=val;
    }
    
}

float pop()
{
   
     return stack[top--];
}


float evaluatepostfix(char exp[])
{
    int i=0;
    float op1,op2,value;
    while(exp[i]!='\0')
    {
        if(isdigit(exp[i]))
        {
            push(exp[i]-'0');
        }
        else{
            op1=pop();
            op2=pop();
            switch (exp[i])
            {
            case /* constant-expression */'+':
                /* code */value=op1+op2;
                break;

            case  '-':
              value=op1-op2;
              break;

            case '*':
               value=op1*op2;
               break;      
            
            case '/':
                value=op1/op2;
                 break;

             
            default:
                 printf("\n invalid choice");
                break;
            }
            push(value);
        }
        i++;

    }
    return (pop());
}
