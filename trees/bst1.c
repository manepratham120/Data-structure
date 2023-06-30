#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *tree;
void create_tree(struct node *);
struct node *insert(struct node *,int val );
void preorder(struct node *);
void inorder(struct node *);
void postorder(struct node *);
struct node *smallest(struct node *tree);
void delete(struct node *tree,int data);
int main()
{
	int ch,val;
	create_tree(tree);	
	do{
		printf("\n ****menu***");
		printf("\n 0:Exit");
		printf("\n 1. Insertion");
		printf("\n2.deletion:");
		printf("\n 3.preorder traversal");
		printf("\n 4.inorder traversal");
		printf("\n 5.postorder traversal");
		printf("\n Enter the choice =");
		scanf("%d",&ch);
		
		
		switch(ch)
		{
			case 1:printf("\nEnter the value=");
			       scanf("%d",&val);
			       tree=insert(tree,val);
			       break;
			       
			       

		    case 3:
			      preorder(tree);
				  break;

			case 4:
			    inorder(tree);
				break;

		    case 5:
			    postorder(tree);
				break;

			default:
			     printf("\n Invalid choice :");
				 break;				  		   
		}
	}
	while(ch!=0);
	return 0;
}
void create_tree(struct node *tree)
{
	tree=NULL;
}

struct node *insert(struct node *tree,int val)
{
	struct node *ptr,*nodeptr,*parentptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=val;
	ptr->left=NULL;
	ptr->right=NULL;
	if(tree==NULL)
	{
		tree=ptr;
	}	
	else
	{
		parentptr=NULL;
		nodeptr=tree;
		while(nodeptr!=NULL)
		{
			parentptr=nodeptr;
			if(val<nodeptr->data)
			{
				nodeptr=nodeptr->left;
			}
			else
			{
				nodeptr=nodeptr->right;
			}
		}
			if(val<parentptr->data)
			{
				ptr=parentptr->left;
			}
			else
			{
				ptr=parentptr->right;
			}
			
		
	}
	return tree;
}

void preorder(struct node *tree)
{
	if(tree!=NULL)
	{
	printf("\n \t %d",tree->data);
	preorder(tree->left);
	preorder(tree->right);
	}
}

void inorder(struct node *tree)
{
	if(tree!=NULL)
    {
	    inorder(tree->left);
		printf("\t %d",tree->data);
		inorder(tree->right);
	}
}

void postorder(struct node *tree)
{
	if(tree!=NULL)
 	{
        postorder(tree->left);
		postorder(tree->right);
      	printf("%d",tree->data);
	}
}

void delete(struct node *tree,int data)
{
	if(tree==NULL)
	{
		tree=tree;
	}
	if(data>tree->data)
	{
		tree->right=delete(tree->right,data);
	}
	else if(data<tree->data)
	{
		tree->left=delete(tree->left,data);
	}
	else
	{
		//case 1:
		if(tree->left==NULL)
		{
			struct node *temp=tree->right;
			free(temp);
			return temp;
		}

		else if(tree->right==NULL)
		{
			struct node *temp=tree->left;
			free(temp);
			return temp;
		}

		else{
			struct node *temp=smallest(tree->right);
			tree->data=temp->data;
			tree->right=delete(tree->right,temp->data;);
			
		}
		return tree;
	}
}

struct node *smallest(struct node *tree)
{
  if(tree==NULL||tree->left==NULL)
  {
	return tree;
  }
  else{
	return smallest(tree->left);
  }
}




