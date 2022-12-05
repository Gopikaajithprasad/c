#include<stdio.h>
void main(){
int i,j,n;
int b[n];
int U[50]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
printf("The universal set is:{");
for(i=0;i<15;i++)
	{
	printf("%d,",U[i]);
	}
printf("}\n");
printf("enter the size of the set:");
scanf("%d",&n);
int a[n];
printf("enter the elements in the set");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
for(i=0;i<50;i++){
	for(j=0;j<n;j++){
		if(U[i]==a[j]){
			b[j]=1;
			}
		else{
			b[j]==0;
			}
	}
}
printf("the bit string array is:");
for(j=0;j<n;j++){
printf("%d",b[j]);
}
}
			
			
