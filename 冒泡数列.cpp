#include<stdio.h>

int main()
{
	int i,j,a[10],temp;
	printf("input 10 numbers: ");
	for(i=0;i<=9;i++)//����˼·��ȷ����С����Ҫע�⣺ѭ��i������iһһ��Ӧ��������Ϊѭ������m���� 
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
	for (i=0;i<10;i++)//һһ������鷽�����͸�ֵ������ 
	{
		printf("%d\n",a[i]);
	}
	
}
