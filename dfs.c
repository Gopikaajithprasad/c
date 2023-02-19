#include<stdio.h>
int g[10][10],visited[10],n,i,j,q[10],r=-1,f;
void dfs();
void main()
{
	printf("enter no.of nodes:");
	scanf("%d",&n);
	printf("Enter the adjascent matrix:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&g[i][j]);	
		}
	}	
	for(i=0;i<n;i++)
	{
		visited[i]=0;
	}
	dfs(0);
}

void dfs(int v)
{
	printf("%d\t",v);
	visited[v]=1;
	for(i=0;i<n;i++)
	{
		if(!(visited[i])&& g[v][i]==1)
		{
			q[++r]=i;
		}
		
	}
	for(i=0;i<n;i++)
	{
		if(!(visited[i]))
		{
			dfs(q[i]);
		}
	}
}
