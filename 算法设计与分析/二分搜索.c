//����������������������a[0...n-1]�����鳤��n��������Ԫ��s
//�������������������е�һ�����ֵĴ�����Ԫ���±꣬���򷵻�-1

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