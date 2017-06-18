#include"main.h"

int main()
{
	#pragma region 二分搜索
	/*int n;scanf("%d", &n);
	int i;int a[100];
	for(i=0;i<n;i++)
	{
		scanf("%d", &(a[i]));
	}
	int res=BinarySearch(a, n, 4);
	printf("%d\n", res);*/
	#pragma endregion

	#pragma region 归并排序
	/*int a[100], b[100];
	int n;scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &(a[i]));
	}

	MergeSort(a, 0, n-1, b);
	for(int i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}*/
	#pragma endregion

	#pragma region 快速排序
	/*int a[100];
	int n;scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%d", &(a[i]));
	Qsort(a, 0, n-1);
	for(int i=0;i<n;i++)
		printf("%d ", a[i]);*/
	#pragma endregion

	#pragma region 线性时间选择

		////随机数测试
		//srand(time(0));
		//int n;scanf("%d", &n);
		//int a[100], c[100];
		//for(int i=0;i<n;i++)
		//{
		//	//scanf("%d", &(a[i]));
		//	a[i]=rand()%10000;
		//	c[i]=a[i];
		//}
		//int s;scanf("%d", &s);

		//printf("%d\n", LinearSelect(a, 0, n-1, s));

		//Qsort(c, 0, n-1);
		//printf("\n\n%d\n", c[s-1]);
		//for(int i=0;i<n;i++)
		//	printf("%4d%c", c[i], (i+1)%5==0 ? '\n' : ' ');

	#pragma endregion

	#pragma region 矩阵连乘
	/*int n;scanf("%d", &n);
	int a[100], b[100];
	for(int i=0;i<n;i++)
	{
		scanf("%d%d", &(a[i]), &(b[i]));
	}

	printf("%d\n", MatrixMultiply(a, b, n));

	MatrixTraceBack(0, n-1);*/
	#pragma endregion

	#pragma region 最长公共子序列
	/*char a[100], b[100];
	memset(a, 0, sizeof(a)), memset(b, 0, sizeof(b));
	scanf("%s", a);scanf("%s", b);
	int na=strlen(a);int nb=strlen(b);
	for(int i=na;i>0;i--) a[i]=a[i-1];
	for(int i=nb;i>0;i--) b[i]=b[i-1];
	a[0]='&';b[0]='*';a[++na]=0;b[++nb]=0;

	printf("%d\n", LCS(a, b, strlen(a), strlen(b)));

	LCSTraceBack(a, b, strlen(a), strlen(b));*/
	#pragma endregion

	#pragma region 最大子段和

	/*
	int n;scanf("%d", &n);
	int a[100];
	for(int i=1;i<=n;i++) scanf("%d", &(a[i]));
	int s, t;
	printf("%d\n", LSS(a, n, &s, &t));
	for(int i=s;i<=t;i++) printf("%d%c", a[i], i==t ? '\n' : ' ');
	*/
	#pragma endregion

	#pragma region Ol背包

	/*int n, V;scanf("%d", &n);
	int weight[100], value[100];
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &(weight[i]), &(value[i]));
	}
	scanf("%d", &V);
	printf("%d\n", Knapsack(weight, value, n, V));*/

	#pragma endregion

	#pragma region 哈夫曼
	/*
	int n;scanf("%d", &n);
	int a[100];
	for(int i=0;i<n;i++) scanf("%d", &(a[i]));
	int rt;
	HuffmanCode(a, n, &rt);
	HuffmanTraceBack(rt);
	*/
	#pragma endregion

	#pragma region Dijkstra

	//int n;scanf("%d", &n);
	//int dis[100];
	//int mp[100][100];
	//for(int i=0;i<100;i++)
	//	for(int j=0;j<100;j++)
	//	{
	//		if(i!=j) mp[i][j]=0x3f3f3f3f;
	//		else mp[i][j]=0;
	//	}
	//
	//int m;scanf("%d", &m);
	//for(int i=0;i<m;i++)
	//{
	//	int a, b, c;
	//	scanf("%d%d%d", &a, &b, &c);
	//	mp[a][b]=mp[b][a]=c;
	//}
	//Dijkstra(mp, n, dis, 0);
	//for(int i=0;i<n;i++)
	//	printf("%d%c", dis[i], i==n-1 ? '\n' : ' ');
	///*5 7
	//0 1 100
	//0 2 30
	//0 4 10
	//2 1 60
	//2 3 60
	//3 1 10
	//4 3 50*/
	#pragma endregion

	#pragma region Kruskal

	//int n, m;scanf("%d%d", &n, &m);
	//Kruskal(n, m);
	#pragma endregion

	#pragma region n皇后
	//int n;scanf("%d", &n);
	//printf("%d\n", NQueen(n));
	#pragma endregion

	#pragma region m染色
//int n, m, c;scanf("%d%d%d", &n, &m, &c);
//printf("%d\n", Color(n, m, c));
	#pragma endregion

	#pragma region TSP问题
	//int n, m;scanf("%d%d", &n, &m);
	//
	//printf("%d\n", TSP(n, m));
	#pragma endregion

	system("pause");
	return 0;
}

