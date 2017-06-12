//归并排序，输入待排序数组a[]，排序首元素下标，末元素下标，tmp是临时数组
//无返回值，a直接就是排好序的数组

void MergeList(int *a,int first,int mid,int last,int *tmp)//合并两个数组
{
	int i=first, j=mid+1, k=0;
	while(i<=mid&&j<=last)
	{
		if(a[i]<a[j])
		{
			tmp[k++]=a[i++];
		}
		else
		{
			tmp[k++]=a[j++];
		}
	}
	while(i<=mid) tmp[k++]=a[i++];
	while(j<=last) tmp[k++]=a[j++];

	for(i=0;i<k;i++) a[first+i]=tmp[i];
}
void MergeSort(int *a,int first,int last,int *tmp)//归并排序
{
	if(first>=last) return;//递归基

	int mid=(first+last)/2;
	MergeSort(a, first, mid, tmp);//排序a[first...mid]
	MergeSort(a, mid+1, last, tmp);//排序a[mid+1...last]
	MergeList(a, first, mid, last, tmp);//合并排好序的两部分
}