#include<stdio.h>
#include<malloc.h>
void push();
void pop();
void peek();
void display();
struct node
{
	int data;
	struct node *next;
};
struct node *top=0,*temp,*new_node;
int choice;

int main()
{
	printf("1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT");
	do
	{
	printf("\nEnter choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			push();
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
		case 5:
			printf("EXIT");
			break;
		default:
			printf("INVALID");
			break;
	}
	}while(choice!=5);
}

void push()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&new_node->data);
	new_node->next=top;
	top=new_node;
	
}
void pop()
{
	if(top==0)
	{
		printf("the stack is empty");
	}
	else
	{
		temp=top;
		top=temp->next;
		printf("popped elements is %d:",temp->data);
		free(temp);
	}
}
void peek()
{
	if(top==0)
	{
		printf("the stack is empty");
	}
	else
	{
		printf("peek element is %d:",top->data);
		
	}
}
void display()
{
	temp=top;
	if(temp==0)
	{
		printf("empty");
	}
	else
	{
		while(temp!=0)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
}
