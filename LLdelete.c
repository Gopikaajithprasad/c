#include<stdio.h>
#include<malloc.h>
void begining();
void position();
void end();
void display();
	struct node
	{
		int data;
		struct node*next;
	}*start=NULL;
	struct node *new_node,*temp,*next_node,*prev_node;
	int main()
{
	int a,choice;
	do{
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the node element:");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
		temp=new_node;
	}
	else
	{
	temp->next=new_node;
	temp=new_node;
	}
	printf("Add more?(1?0):");
	scanf("%d",&a);
	}while(a==1);
	display();

	
	printf("\nl.Begining\n2.Position\n3.End\n4.Exit\n");
		do{
	printf("\nEnter the choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			   begining();
			   break;
		case 2:
		       position();
			   break;
		case 3:
		       end();
		       break;
		
		case 4:
			printf("EXIT");
			break;
		default:
			printf("invalid");
			break;
		
	}
			
	}while(choice!=4);
	
}
void begining()
{
	temp=start;
	start=temp->next;
	printf("deleted elements is %d",temp->data);
	free(temp);
	display();
}
void position()
{
	int i=1,pos;
	printf("Enter the position:");
	scanf("%d",&pos);
	temp=start;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	next_node=temp->next;
	temp->next=next_node->next;
	printf("deleted elements is %d",next_node->data);
	free(next_node);
	display();
	
}
void end()
{
	
	temp=start;
	if(temp->next==NULL)
	{
	printf("Popped element is:%d",temp->data);
	
	free(temp);
	printf("\nLinked list empty");
	}
	else{
	while(temp->next!=NULL)
	{
		prev_node=temp;
		temp=temp->next;
	}
	prev_node->next=NULL;
	printf("deleted elements is %d",temp->data);
	free(temp);
	display();
	}
}
void display()
{
	printf("\nLinked list is:");
	for(temp=start;temp!=NULL;temp=temp->next)
	{
	printf("%d ->",temp->data);
	
	}
	printf("null");
}
