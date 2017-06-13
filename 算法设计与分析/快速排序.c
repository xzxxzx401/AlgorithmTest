//���εĿ��������ⲿ����Qsort����
//a�Ǵ��������飬��a[l...r]
//�޷���ֵ�����غ�a��������

#include<time.h>
int QsortPartion(int *a, int l, int r)//���ȡ�㲢����
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

void Qsort(int *a, int l, int r)//��������
{
	if(l>=r) return;

	int pos=QsortPartion(a, l, r);//����

	Qsort(a, l, pos);//�Ż��ֵ����
	Qsort(a, pos+1, r);//�Ҳ�

}