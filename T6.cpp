#include<stdio.h>

int fab(int x)//如何保证每个数组每个元素的绝对值不相等？ 
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
	
	for(c=count;c>1;c--)//有多少个“最大值” 
	{
		for(d=0;d<c;d++)//每个最大值要进行几轮比较 
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
		printf("%d ",a[j]);//%d后面加空格输出得数值之间就有空格 
}
 } 
