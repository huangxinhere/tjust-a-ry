#include<stdio.h>

int fab(int x)//��α�֤ÿ������ÿ��Ԫ�صľ���ֵ����ȣ� 
{
	if(x<0)
	{
		return -x; 
	}
	else
	return x;
}

int main()
{
	int a[100];
	int i,n,c,d,j;
	int count;
	int temp;
	int m;
	
for(m=0;m<=100;m++)
{
		count=0;
		for(i=0;i<=100;i++)
	   {
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		count++;
		}
	
	printf("the total=%d\n",count);
	
	for(c=count;c>1;c--)//�ж��ٸ������ֵ�� 
	{
		for(d=0;d<c;d++)//ÿ�����ֵҪ���м��ֱȽ� 
		{
			if (a[d]<a[d+1])
			{
				a[d]=fab(a[d]);
				a[d+1]=fab(a[d+1]);
				temp=a[d];
				a[d]=a[d+1];
				a[d+1]=temp;
			}
			
		}
	}
	for(j=0;j<=count;j++)	
		printf("%d ",a[j]);//%d����ӿո��������ֵ֮����пո� 
}
 } 
