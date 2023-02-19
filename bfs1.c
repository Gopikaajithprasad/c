#include<stdio.h>
int g[10][10],q[10],i,j,n,v,visited[10],f,r=-1;
void bfs();
void main()
{
	printf("Enter the number of vertex:");
	scanf("%d",&n);
	printf("\nEnter the adjascent matrix:");
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
	printf("Enter the starting vertex:");
	scanf("%d",&v);
	bfs(v);
	printf("Reachable nodes are:");
	for(i=0;i<n;i++)
	{
		if(visited[i])
		{
			printf("\n%d",i);
		}
	}
	
}

void bfs(int v)
{
	for(i=0;i<n;i++)
	{
		if(!(visited[i])&& g[v][i]==1)
		{
			q[++r]=i;
		}
	}
	if(f<=r)
	{
		visited[q[f]]=1;
		bfs(q[++f]);
	}
	
}
