//01����
//����Ϊ ���(����)���飬��ֵ���飬��Ʒ�������������
//��������ֵ

int Knapsack(int *weight, int *value, int n, int V)
{
	int dp[100][100];
	for(int i=0;i<100;i++)
		for(int j=0;j<100;j++)
			dp[i][j]=0;

	for(int i=1;i<=n;i++)
	{
		for(int j=V;j>=0;j--)
		{
			if(j>=weight[i])
			{
				int tval=dp[i-1][j-weight[i]]+value[i];
				if(dp[i-1][j]<tval) 
					dp[i][j]=tval;
				else dp[i][j]=dp[i-1][j];
			}
			else
			{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	return dp[n][V];
}