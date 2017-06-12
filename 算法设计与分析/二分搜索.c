//二分搜索，输入有序数组a[0...n-1]，数组长度n，带搜索元素s
//若搜索到，返回数组中第一个出现的带搜索元素下标，否则返回-1

int BinarySearch(int *a, int n, int s)
{
	int l=0, r=n-1;
	while(l<r)
	{
		int mid=(l+r)/2;
		if(a[mid]>=s)
		{
			r=mid;
		}
		else
		{
			l=mid+1;
		}
	}
	if(a[l]!=s) l=-1;
	return l;
}