//�O(n)������ʱ��ѡ��
//��ѡ������a��lΪ��ʵ�˵㣬rΪĩβ�˵㣬sΪѡ���sС
//����������ѡ����

int LinearSelectPartion(int *a, int l, int r, int val)
{

	int tkey=a[l];
	int key=val; 

	while(l<r)//�ѱ�keyС��ȫ��key��ߣ����ȫ���ұ�
	{
		while(l<r&&a[r]>=key) r--;
		a[l]=a[r];
		while(l<r&&a[l]<=key) l++;
		a[r]=a[l];
	}

	a[l]=tkey;

	return l;//���ػ��ֵ�
}
void BubbleSort(int *a, int l, int r)
{
	for(int i=l;i<=r;i++)
		for(int j=i+1;j<=r;j++)
		{
			if(a[i]>a[j])
			{
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
}
int LinearSelect(int *a, int l, int r, int s)
{
	if(r-l+1<=15)
	{
		BubbleSort(a, l, r);
		return a[l+s-1];
	}
	for(int i=0;i<=(r-l-4)/5;i++)
	{
		BubbleSort(a, l+5*i, l+5*i+4);
		int tmp=a[l+5*i+2];
		a[l+5*i+2]=a[l+i];
		a[l+i]=tmp;
	}
	int x=LinearSelect(a, l, l+(r-l-4)/5, (r-l-4)/10);

	int pos=LinearSelectPartion(a, l, r, x);

	int j=pos-l+1;
	if(s<=j)
	{
		return LinearSelect(a, l, pos, s);
	}
	else
	{
		return LinearSelect(a, pos+1, r, s-j);
	}
	
}