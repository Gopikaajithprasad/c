#include<stdio.h>
#include<stdlib.h>

struct tree{
	int data;
	struct tree *left,*right;
}*root=NULL,*temp,*newnode,*parent,*tempsec;

int key,item,s,d,choice,flag;

void insert(int item);
void delete(int key,struct tree *ptr);
void inorder(struct tree*ptr);
void preorder(struct tree*ptr);
void postorder(struct tree*ptr);
struct tree *search(int key,struct tree *ptr);


void insert(int item)
{
	newnode=(struct tree *)malloc(sizeof(struct tree*));
	newnode->data=item;
	newnode->left=NULL;
	newnode->right=NULL;
	parent=NULL;
	
	if(root==NULL)
	{
		root=newnode;
		printf("Inserted");	
	}
	else
	{
		temp=root;
		while(temp!=NULL)
		{
			parent=temp;
			if(item>temp->data)
			{
				temp=temp->right;
			}
			else if(item<temp->data)
			{
				temp=temp->left;
			}
			else
			{
				break;
			}
		}
		if(item>parent->data)
		{
			parent->right=newnode;
		}
		else if(item<parent->data)
		{
			parent->left=newnode;
		}
		else{
			printf("Item already exist");
		}
		
		
	}
}

void inorder(struct tree*ptr)
{
	if(ptr!=NULL)
	{
		inorder(ptr->left);
		printf("%d",ptr->data);
		inorder(ptr->right);
	}
}

void preorder(struct tree *ptr)
{
	if(ptr!=NULL)
	{
		printf("%d",ptr->data);
		preorder(ptr->left);
		preorder(ptr->right);
	}
}

void postorder(struct tree *ptr)
{
	if(ptr!=NULL)
	{
		postorder(ptr->left);
		postorder(ptr->right);
		printf("%d",ptr->data);
	}
}

struct tree *search(int key,struct tree*ptr)
{
	if(ptr!=NULL)
	{
		if(ptr->data==key)
		{
			return ptr;
			printf("Data found");
		}
		else if(key<ptr->data)
		{
			parent=ptr;
			search(key,ptr->left);
		}
		else if(key>ptr->data)
		{
			parent=ptr;
			search(key,ptr->right);
		}
	}
	else
	{
		return NULL;
	}
}

void delete(int key,struct tree *ptr)
{
	struct tree* temp;
	parent=NULL;
	temp=search(key,ptr);
	if(temp==NULL)
		{
		printf("Item not found");
		}
	else if((temp->left==NULL )&&( temp->right==NULL))
	{
		
		if(parent->left==temp)
		{
			parent->left=NULL;
		}
		else
		{
			parent->right=NULL;
		}
		free(temp);
		printf("Deleted successfully");
		}
	else if((temp->left!=NULL )&& (temp->right==NULL))
	{
		if(root==temp)
		{
			root=temp->left;
			free(temp);
		}
		else{
			if(parent->left==temp){
				parent->left=temp->left;
			}
			else{
				parent->right=temp->left;
			}
			temp=NULL;
			free(temp);
		}
		printf("Deleted succesfully");
	}
	else if(temp->left==NULL && temp->right!=NULL)
	{
		if(root==temp)
		{
			root=temp->right;
			free(temp);
		}
		else{
			if(parent->left==temp){
				parent->left=temp->right;
				
			}
			else{
				parent->right=temp->right;
			}
			free(temp);
		}
		temp=NULL;
	printf("Deleted successfukky");
}
	

	else if(temp->left!=NULL && temp->right!=NULL )
	{
		struct tree *tempsuc;
		parent=temp;
		tempsuc=parent->right;
		int flag=0;
		while(tempsuc->left!=NULL)
		{
			parent=tempsuc;
			tempsuc=tempsuc->left;
			flag++;
		}
		if(flag==0)
		{
			temp->data=tempsuc->data;
			temp->right=tempsuc->right;
			free(tempsuc);
				
		}
		else{
			temp->data=tempsuc->data;
			parent->left=tempsuc->right;
			free(tempsuc);
		}
		printf("Deleted successfully");
		
	}
}

int main()
{
do{

printf("\nOptions:");
printf("\n_____________");
printf("\n1.insert\n2.inorder\n3.preorder\n4.postorder\n5.search\n6.delete\n7.exit");


	printf("\n\nEnter option:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter the data:");
			scanf("%d",&item);
			insert(item);
			break;
		case 2:
			inorder(root);
			break;
		case 3:
			preorder(root);
			break;
		case 4:
			postorder(root);
			break;
		case 5:
			printf("Enter thh element to be search:");
			scanf("%d",&s);
			search(s,root);
			break;
		case 6:
			printf("Enter the element to be deleted:");
			scanf("%d",&d);
			delete(d,root);
			break;
		case 7:
			printf("Exited");
			break;
		default:
			printf("Enter the valid option");
			break;
	}
}while(choice!=7);
}
	
	
	

