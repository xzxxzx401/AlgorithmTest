//最长公共子序列
//输入字符串a,b以及两者长度
//函数返回LCS长度
//TraceBack调用直接输出公共序列

#include<stdio.h>
static int pos[100][100];
int LCS(char *a, char *b, int la, int lb)
{
	int res[100][100];

	for(int i=0;i<100;i++)
		for(int j=0;j<100;j++)
		{
			res[i][j]=0;
			pos[i][j]=-1;
		}

	for(int i=1;i<la;i++)
	{
		for(int j=1;j<lb;j++)
		{
			if(a[i]==b[j])
			{
				res[i][j]=(res[i-1][j-1])+1;
				pos[i][j]=0;
			}
			else if(res[i][j-1]>res[i-1][j])
			{
				res[i][j]=res[i][j-1];
				pos[i][j]=1;
			}
			else
			{
				res[i][j]=res[i-1][j];
				pos[i][j]=2;
			}
		}
	}
	return res[la-1][lb-1];
}
void LCSTraceBack(char *a, char *b, int la, int lb)
{
	char lcs[100];int k=0;
	for(int i=la-1,j=lb-1;i>0&&j>0;)
	{
		if(pos[i][j]==0) { lcs[k++]=a[i]; i--, j--; }
		else if(pos[i][j]==1) j--;
		else i--;
	}
	for(k=k-1;k>=0;k--)
	{
		printf("%c", lcs[k]);
	}
	printf("\n");
}