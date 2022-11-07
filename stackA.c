#include<stdio.h>
int top=-1;
int stack[100],n,choice,i;
void push();
void pop();
void display();
int main()
{

printf("Enter the size of the stack:");
scanf("%d",&n);
printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
do
{
printf("\nEnter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1 :
	push();
	break;

case 2 :
	pop();
	break;

case 3 :
	display();
	break;
case 4:
	printf("EXIT");
	break;

default:
	printf("INVALID");
	break;
}
}
while(choice!=4);
return 0;
}
void push()
{
int value;
if(top>=n-1)
{
printf("overflow");
}
else
{
printf("enter the value needed to be pushed:");
scanf("%d",&value);
top++;
stack[top]=value;
}
}
void pop()
{
if(top<=-1)
{
printf("underflow");
}
else
{
printf("Popped elements is %d",stack[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("stack is");
for(i=top;i>=0;i--)
{
printf("\n%d",stack[i]);
}
}
else
{
printf("stack is empty");
}
}

