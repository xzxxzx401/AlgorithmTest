//�鲢�����������������a[]��������Ԫ���±꣬ĩԪ���±꣬tmp����ʱ����
//�޷���ֵ��aֱ�Ӿ����ź��������

void MergeList(int *a,int first,int mid,int last,int *tmp)//�ϲ���������
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
void MergeSort(int *a,int first,int last,int *tmp)//�鲢����
{
	if(first>=last) return;//�ݹ��

	int mid=(first+last)/2;
	MergeSort(a, first, mid, tmp);//����a[first...mid]
	MergeSort(a, mid+1, last, tmp);//����a[mid+1...last]
	MergeList(a, first, mid, last, tmp);//�ϲ��ź����������
}