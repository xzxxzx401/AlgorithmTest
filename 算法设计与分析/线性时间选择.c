//����ʱ��ѡ��˼·ͬ�������������ǻ��ֺ�ֻ��һ��

#include<time.h>
int Partion(int *a, int l, int r)//���ȡ�㲢����
{
	srand(time(0));

	int now=rand()%(r-l)+l;//����[l,r-1]֮���һ�������

	int tmp=a[now];
	a[now]=a[l];
	a[l]=tmp;

	int key=a[l];

	while(l<r)//�ѱ�keyС��ȫ��key��ߣ����ȫ���ұ�
	{
		while(l<r&&a[r]>=key) r--;
		a[l]=a[r];
		while(l<r&&a[l]<=key) l++;
		a[r]=a[l];
	}

	a[l]=key;

	return l;//���ػ��ֵ�
}

int LinearSelect(int *a, int l, int r, int s)
{

}