#include<stdio.h>
void main()
{
int a[100],n,i,d,swap;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The array is:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
for(i=0;i<n-1;i++)
{
for(d=0;d<n-i-1;d++)
{
if(a[d]>a[d+1])
{
swap=a[d];
a[d]=a[d+1];
a[d+1]=swap;
}
}
}
printf("\nThe swapped array is:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
