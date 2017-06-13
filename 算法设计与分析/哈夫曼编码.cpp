//优先队列的哈夫曼nlogn
//输入出现次数数组，字符个数，rt是作为根节点返回
//回溯打印树，传入根节点

#include<queue>
#include<stdio.h>
struct Node
{
	int num;
	int f;
	//Node(){}
	Node(int _num, int _f)
	{
		num=_num;
		f=_f;
	}
	bool operator < (const Node &n) const
	{
		return f>n.f;
	}
};
static int son[100][2];
void HuffmanCode(int *fre,int n,int *rt)
{
	std::priority_queue<Node> que;
	for(int i=0;i<n;i++)
	{
		Node a(i, fre[i]);
		que.push(a);
	}
	for(int i=0;i<100;i++)
		for(int j=0;j<2;j++)
			son[i][j]=-1;
	int k=n;
	while(que.size()>1)
	{
		Node a=que.top();que.pop();
		Node b=que.top();que.pop();
		son[k][0]=a.num;son[k][1]=b.num;
		Node c(k++, a.f+b.f);
		que.push(c);
	}
	*(rt)=k-1;
}
void HuffmanTraceBack(int k)
{
	printf("%d", k);
	if(son[k][0]!=-1&&son[k][1]!=-1)
	{
		printf("(");
		HuffmanTraceBack(son[k][0]);
		printf("|");
		HuffmanTraceBack(son[k][1]);
		printf(")");
	}
	else if(son[k][0]==-1&&son[k][1]==-1)
	{
		return;
	}
	else if(son[k][0]!=-1&&son[k][1]==-1)
	{
		printf("(");
		HuffmanTraceBack(son[k][0]);
		printf(")");
	}
	else if(son[k][0]==-1&&son[k][1]!=-1)
	{
		printf("(");
		HuffmanTraceBack(son[k][1]);
		printf(")");
	}

	
	
}