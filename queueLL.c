#include<stdio.h>
#include<malloc.h>
void push();
void pop();
void display();
struct node
{
	int data;
	struct node *next;
};
struct node *new_node,*temp,*front=0,*rear=0;
int choice;
int main()
{
	printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
	do
	{
		printf("\nEnter the choice:");
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
				display();
				break;
			case 4:
				printf("EXIT");
				break;
			default:
				printf("INVALID");	
				break;
		}
	}while(choice!=4);
	
}
void push()
{
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&new_node->data);
	new_node->next=0;
	if(front==0 && rear==0 || front>rear)
	{
		front=rear=new_node;
	}
	else
	{
		rear->next=new_node;
		rear=new_node;
	}
}
void pop()
{
	if(front==0  || front>rear)
	{
		printf("queue is empty");
	}
		else
		{
	temp=front;
	front=temp->next;
	printf("popped element is %d:",temp->data);
	free(temp);
	}
}
	
void display()
{
	temp=front;
	if(front==0  && rear==0 || front>rear)
	{
		printf("queue is empty");
	}
	else
	{
	for(temp=front;temp!=0;temp=temp->next)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	}
}
