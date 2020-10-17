#include<stdio.h>

int main()
{
	int i,j,a[10],temp;
	printf("input 10 numbers: ");
	for(i=0;i<=9;i++)//总体思路正确，有小问题要注意：循环i与数组i一一对应，不能认为循环可用m代替 
	  {
	  	scanf("%d",&a[i]);
	  }
	  	for(j=9;j>=1;j--)
	{
		for(i=0;i<=j;i++)
		{
			if (a[i]>a[i+1])
			{
				temp=a[i+1];
				a[i+1]=a[i];
				a[i]=temp;
			}
		}
	}
	for (i=0;i<10;i++)//一一输出数组方法，和赋值法相似 
	{
		printf("%d\n",a[i]);
	}
	
}
