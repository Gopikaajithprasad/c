#include<stdio.h>
void main()
{
	int a[100],n1,i,ele,count=0;
	printf("Enter the size of first array:");
	scanf("%d",&n1);
	printf("Enter the array elements:");
	for(i=0;i<=n1;i++)
	{
		scanf("%d",&a[i]);
    }
    printf("The Entered array elements are:");
	for(i=0;i<=n1;i++)
	{
		printf("%d \n",a[i]);
    }
    printf("Enter an element to search:");
    scanf("%d",&ele);
    for(i=0;i<n1;i++)
    {
    	if(a[i]==ele)
    	{
    		printf("%d found at position %d",ele,i);
    		count++;
		}
		
	}
	if(count==0)
	printf("Element not found");
}
    
