#include<stdio.h>
#define max 50 
void insert();
void delete();
void display();
int queue[max];
int front=-1,rear=-1,i;
int main()
{
int choice;
printf("1.INSERT \n 2.DELETE \n 3.DISPLAY\n 4.EXIT");
do
{
printf("\n Enter the choice:");
scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			insert();
			break;
		case 2:
			delete();
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
void insert()
	{
	int item;
	if(rear == max-1)
		{
		printf("overflow");
		return;
		}
	else
	{
			printf("Enter the element to insert:");
			scanf("%d",&item);
			if(front==-1 && rear==-1)
			{
				front=rear=0;
			}
			else
			{
				rear=rear+1;
			}
			queue[rear]=item;
			printf("item inserted");
}
}
void delete()
	{
	if(front>rear || front == -1)
		{
		printf("underflow");
		}
	else{
		printf("the deleted element is %d",queue[front]);
		front++;
		}
}
void display()
	{
	if(front<=-1)
		{
		printf("Queue is empty");
		}
	else
		{
		for(i=front;i<=rear;i++)
			{
			printf("%d\t",queue[i]);
			}
		}
	}


		
