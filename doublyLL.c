#include<stdio.h>
#include<malloc.h>
void begining();
void position();
void end();
void popbegining();
void popposition();
void popend();
void display();
	struct node
	{
		int data;
		struct node *prev,*next;
	}*head=NULL;
	struct node *new_node,*temp,*next_node,*prev_node;
	int main()
{
	int a,choice;
	do{
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the node element:");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(head==NULL)
	{
		head=new_node;
		new_node->prev=head;
		temp=head;
	}
	else
	{
	temp->next=new_node;
	new_node->prev=temp;
	temp=new_node;
	}
	printf("Add more?(1?0):");
	scanf("%d",&a);
	}while(a==1);
	printf("\nThe linked list is:");
	for(temp=head;temp!=NULL;temp=temp->next)
	{
	printf("%d ->",temp->data);
	}
	printf("null");

	
	printf("\nl.Insertion at the begining\n2.Insertion at a position\n3.Insertion at the end\n4.Deletion at begining\n5.deletion at position\n6.deletion at end\n7.display\n8.EXIT\n");
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
			popbegining();
			break;
		case 5:
			popposition();
			break;
		case 6:
			popend();
			break;
		case 7:
			printf("EXIT");
			  break;
		default:
			printf("invalid");
			break;
		
	}
			
	}while(choice!=7);
	
}
void begining()
{
	int value,b;
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the node element:");
	scanf("%d",&value);
	
	new_node->data=value;
	new_node->next=head;
	head->prev=new_node;
	head=new_node;
	printf("\nThe linked list is:");
	for(temp=head;temp!=NULL;temp=temp->next)
	{
	printf("%d ->",temp->data);
	}
	printf("null");
}
void position()
{
	int pos,i=0;
	printf("Enter the position:");
	scanf("%d",&pos);
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the node element:");
	scanf("%d",&new_node->data);
	temp=head;
	while(i<pos-2)
	{
		temp=temp->next;
		i++;
	}
	new_node->next=temp->next;
	temp->next->prev=new_node;
	temp->next=new_node;
	new_node->prev=temp;
	printf("the linked list is:");
	for(temp=head;temp!=NULL;temp=temp->next)
	{
	printf("%d ->",temp->data);
	}
	printf("null");
}
void end()
{
	int a;
	
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the node element:");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new_node;
	new_node->prev=temp;
	printf("the linked list is:");
	for(temp=head;temp!=NULL;temp=temp->next){
	printf("%d ->",temp->data);}
	printf("null");
	
}
void popbegining()
{
	temp=head;
	head=temp->next;
	temp->next->prev=NULL;
	printf("deleted elements is %d",temp->data);
	free(temp);
	display();
}
void popposition()
{
	int i=1,pos;
	printf("Enter the position:");
	scanf("%d",&pos);
	temp=head;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	next_node=temp->next;
	temp->next=next_node->next;
	next_node->next->prev=temp;
	free(next_node);
	display();
	
}
void popend()
{
	temp=head;
	while(temp->next!=NULL)
	{
		prev_node=temp;
		temp=temp->next;
	}
	prev_node->next=0;
	free(temp);
	display();
}
void display()
{
	printf("\nThe linked list is:");
	for(temp=head;temp!=NULL;temp=temp->next)
	{
	printf("%d ->",temp->data);
	
	}printf("null");
}
