#include<stdio.h>

int main()
{
	int max(int x,int y);//��max���������� ���β� 
	int a,b,c;
	
	scanf("%d%d",&a,&b);
	c=max(a,b);//ʵ�� 
	printf("Max is %d\n",max);
 } 
 
 int max(int x,int y)
 {
 	int z;
 	z=x>y?x:y;
 	
 	return z;
  } 
