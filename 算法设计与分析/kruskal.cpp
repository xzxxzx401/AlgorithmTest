//Kruskal
//参数是n点数，m边数
//还需要输入每条边的起点终点权值
//打印出所选边

#include<algorithm>
#include<stdio.h>
struct Edge
{
	int from, to, cost;
	Edge() {}
	Edge(int _from, int _to, int _cost)
	{
		from=_from;
		to=_to;
		cost=_cost;
	}
	bool operator < (const Edge &e) const
	{
		return cost<e.cost;
	}
};

int fa[100];
void init()
{
	for(int i=0;i<100;i++) fa[i]=i;
}
int find(int x)
{
	return (fa[x]!=x) ? (fa[x]=find(fa[x])) : x;
}
void merge(int x, int y)
{
	int fx=fa[x], fy=fa[y];
	if(fx!=fy) fa[fx]=fy;
}

void Kruskal(int n, int m)
{
	init();

	Edge e[100];
	Edge res[100];
	int k=0;
	for(int i=0;i<m;i++)
	{
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		e[i].from=a;e[i].to=b;e[i].cost=c;
	}
	std::sort(e, e+m);
	for(int i=0;i<m;i++)
	{
		if(find(e[i].from)!=find(e[i].to))
		{
			res[k++]=e[i];
			merge(e[i].from, e[i].to);
		}
	}

	for(int i=0;i<k;i++)
	{
		printf("%d to %d, cost %d\n", res[i].from, res[i].to, res[i].cost);
	}

}