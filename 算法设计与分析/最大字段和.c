//����ֶκ�
//��������Ϊ�������飬���ȣ�����ָ�������������Ӷε���ֹλ��
//����ʱ����ֵΪ����Ӷκͣ�start��end����������Ӷ���ֹ��

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