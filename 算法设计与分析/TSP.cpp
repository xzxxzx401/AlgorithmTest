//TSP

#include<stdio.h>
int mp1[100][100];
int arr[100];
int trip[100];
int vis[100];
int x;
int sum2=0;
void tsp(int n,int m,int k,int now)
{
	if(k==n)
	{
		for(int i=1;i<=n;i++)
		{
			if(mp1[n][i]<0x3f3f3f3f)
			{
				int tsum=0;
				arr[k]=1;
				for(int t=0;t<k;t++)
				{
					tsum+=mp1[arr[t]][arr[t+1]];
				}
				if(tsum<sum2)
				{
					sum2=tsum;
					for(int t=0;t<k;t++)
					{
						trip[t]=arr[t];
					}
				}

				return;
			}
		}
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(vis[i]==0&&mp1[now][i]<0x3f3f3f3f)
			{
				vis[i]=1;
				arr[k]=i;
				tsp(n, m, k+1, i);
				vis[i]=0;
			}
		}
	}
}
int TSP(int n,int m)
{
	x=0;sum2=0x3f3f3f3f;
	for(int i=0;i<100;i++)
		for(int j=0;j<100;j++)
			mp1[i][j]=0x3f3f3f3f;

	for(int i=0;i<100;i++) vis[i]=0;
	vis[1]=1;
	arr[0]=1;
	for(int i=0;i<m;i++)
	{
		int a, b, c;scanf("%d%d%d", &a, &b, &c);
		mp1[a][b]=mp1[b][a]=c;
	}
	tsp(n, m, 1, 1);
	for(int t=0;t<n;t++)
	{
		printf("%d ", trip[t]);
	}
	return sum2;
}