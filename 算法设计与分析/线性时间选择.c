//线性时间选择，思路同快速排序，区别是划分后只排一侧

#include<time.h>
int Partion(int *a, int l, int r)//随机取点并划分
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

int LinearSelect(int *a, int l, int r, int s)
{

}