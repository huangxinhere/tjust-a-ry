#define M 10 
#include<stdio.h>

int main ()//ȡ��������ȡ���ã�ȡֵ������a[]�������������ͺá�����Ż���ֵ�����й��ɣ� 
{
	int low,high,mid,n,m;
	int a[M]={-12,0,6,16,23,56,80,100,110,115};
	low=0; 
    high=M-1; //a[high]=a[M-1]; ����high��m��һ��������Ӧ������high������ 
	
	
	printf("input a searched number :\n");
	scanf("%d",&m);
	while (a[low]<=a[high])//���Сֵ�仯������������ŷ����˸ı䣬��n�ǲ���ģ����Դ��ˡ��� 
	{
		mid=(high+low)/2;//�仯��ҲҪ����ѭ���У� 
		if(a[mid]<m)
		{
			low=mid+1;
			
		 }
		 else if(a[mid]> m)
		 {
		 	high=mid-1;
		
		  }
		  else
		  {
		  	printf("The found number is%d\n",a[mid]);break;
		   } 
	}
	if (a[low]>a[high])
	printf("The specific number can not be found\n"); 
}
