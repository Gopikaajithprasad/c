#include<stdio.h>
void main()
{
int a1[100],a2[100],a3[200];
int s1,s2,s3,i,j,k,temp;
printf("Enter the size of first array:");
scanf("%d",&s1);
printf("\nThe elements of the array is:");
for(i=0;i<s1;i++)
{
scanf("%d",&a1[i]);
}
printf("\nThe enterd first array is");
for(i=0;i<s1;i++)
{
printf("%d",a1[i]);
}
printf("\nEnter the size of second array:");
scanf("%d",&s2);
printf("\nThe elements of the array is:");
for(i=0;i<s2;i++)
{
scanf("%d",&a2[i]);
}
printf("\nThe enterd second array is:");
for(i=0;i<s2;i++)
{
printf("%d",a2[i]);
}
s3=s1+s2;
for(i=0;i<s1;i++)
{
a3[i]=a1[i];
}
for(j=0;j<s2;j++)
{
a3[i]=a2[j];
i++;
}
printf("\nThe merged array is:\n");
for(i=0;i<s3;i++)
{
printf("%d\t",a3[i]);
}
}


