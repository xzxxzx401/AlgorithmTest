//分治的快速排序，外部调用Qsort函数
//a是待排序数组，排a[l...r]
//无返回值，返回后a数组有序

#include<time.h>
int QsortPartion(int *a, int l, int r)//随机取点并划分
{
	srand(time(0));

	int now=rand()%(r-l)+l;//产生[l,r-1]之间的一个随机数

	int tmp=a[now];
	a[now]=a[l];
	a[l]=tmp;

	int key=a[l];

	while(l<r)//把比key小的全放key左边，大的全放右边
	{
		while(l<r&&a[r]>=key) r--;
		a[l]=a[r];
		while(l<r&&a[l]<=key) l++;
		a[r]=a[l];
	}
	
	a[l]=key;

	return l;//返回划分点
}

void Qsort(int *a, int l, int r)//快速排序
{
	if(l>=r) return;

	int pos=QsortPartion(a, l, r);//划分

	Qsort(a, l, pos);//排划分点左侧
	Qsort(a, pos+1, r);//右侧

}