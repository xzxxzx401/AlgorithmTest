//n»Êºó

static int res[100];
int sum=0;
int abs(int x)
{
	if(x<0) return -x;
	else return x;
}
int check(int n)
{
	int now=res[n];
	for(int i=1;i<n;i++)
	{
		int tmp=res[i];
		if(tmp==now||(abs(n-i)==abs(tmp-now))) return 0;
	}
	return 1;
}

void nQueen(int n,int now)
{
	if(now==n+1)
	{
		sum++;
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			res[now]=i;
			if(check(now)) 
				nQueen(n, now+1);
		}
	}
}
int NQueen(int n)
{
	sum=0;
	nQueen(n, 1);
	return sum;
}