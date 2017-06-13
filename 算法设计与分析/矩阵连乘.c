//矩阵连乘算法
//输入M[a[i]][b[i]]，a[i]，b[i]分别是系数
//函数返回最小相乘次数
//TraceBack调用直接输出相乘序列

#include<stdio.h>
static int pos[100][100];
int MatrixMultiply(int *a, int *b, int n)
{
	int res[100][100];
	for(int i=0;i<100;i++)
		for(int j=0;j<100;j++)
			res[i][j]=0;

	for(int len=2;len<=n;len++)
	{
		for(int i=0;i+len-1<n;i++)
		{
			int j=i+len-1;
			int sum=a[i]*b[i]*b[j]+res[i+1][j];
			for(int k=i+1;k<j;k++)
			{
				int tmp=res[i][k]+res[k+1][j]+b[k]*a[i]*b[j];
				if(tmp<sum)
				{
					sum=tmp;
					pos[i][j]=k;
				}
			}
			res[i][j]=sum;
		}
	}
	return res[0][n-1];
}
void MatrixTraceBack(int l, int r)
{
	if(l==r)
	{
		printf("(%d)", l);
		return;
	}
	else if(r-l<=1)
	{
		printf("(%d*%d)", l, r);return;
	}

	printf("(");
	MatrixTraceBack(l, pos[l][r]);
	printf("*");
	MatrixTraceBack(pos[l][r]+1, r);
	printf(")");
}