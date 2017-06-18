//单源最短路Dijkstra

void Dijkstra(int(*mp)[100], int n,int *dis,int s)
{
	int vis[100];
	for(int i=0;i<n;i++)
	{
		vis[i]=0;
		dis[i]=mp[s][i];
	}

	dis[s]=0;
	vis[s]=1;
	for(int i=0;i<n;i++)
	{
		int min=0x3f3f3f3f, tmpi=i;
		for(int j=1;j<n;j++)
		{
			if(vis[j]==0&&dis[j]<min)
			{
				min=dis[j];
				tmpi=j;
			}
		}
		vis[tmpi]=1;
		for(int j=0;j<n;j++)
		{
			if(!vis[j]&&dis[j]>dis[tmpi]+mp[tmpi][j])
				dis[j]=dis[tmpi]+mp[tmpi][j];
		}
	}
}