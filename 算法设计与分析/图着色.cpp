//图着色
//n个点，m条边，c种颜色
//m条边每条两个值ab，表示a到b的
//返回种数

#include<stdio.h>

int mp[100][100];
int sum1;
int col[100];
int check(int n, int k)
{
	for(int i=1;i<k;i++)
		if(mp[i][k]&&(col[i]==col[k])) return 0;
	return 1;
}

void color(int n, int c, int nown)
{
	if(nown==n+1)
	{
		sum1++;
	}
	else
	{
		for(int i=1;i<=c;i++)
		{
			col[nown]=i;
			if(check(n, nown))
				color(n, c, nown+1);
		}
	}
}

int Color(int n, int m, int c)
{
	sum1=0;
	for(int i=0;i<100;i++)
		for(int j=0;j<100;j++)
			mp[i][j]=0;
	for(int i=0;i<100;i++) col[i]=0;
	for(int i=0;i<m;i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		mp[a][b]=mp[b][a]=1;
	}
	color(n, c, 1);
	return sum1;
}
