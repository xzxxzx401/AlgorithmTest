//最大字段和
//函数参数为带求数组，长度，两个指针用于求出最大子段的起止位置
//返回时返回值为最大子段和，start和end表明了最大子段起止点

int LSS(int *a, int n, int *start, int *end)
{
	int tstart=1, tend=0;
	int tsum=0,sum=-(0x3f3f3f3f);

	for(int i=1;i<=n;i++)
	{
		if(tsum>0)
		{
			tsum=tsum+a[i];
			tend=i;
		}
		else
		{
			tsum=a[i];
			tstart=i;
			tend=i;
		}
		if(tsum>sum)
		{
			sum=tsum;
			*start=tstart;
			*end=tend;
		}
	}
	return sum;
}