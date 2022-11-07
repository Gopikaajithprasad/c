#include<stdio.h>
void main()
{
	int a[20],n,s,i,count=0;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	printf("Enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
    printf("Enter the element that you want to search:");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
    	if(a[i]==s)
    	{
    		printf("The position of %d is %d",s,i);
    		count++;
		}
		
	}
	if(count==0)
	{
	printf("Element not found");
}
}
    
