#include<stdio.h>

int main()//�����float max���Ժ�Ҫ��Ϊf��Ҫͬ���ͣ�������ת���������� 
{
	int max(int x,int y);//��max���������� ���β� 
	int a,b,c;
	
	scanf("%d%d",&a,&b);
	c=max(a,b);//ʵ�� ,����maxȡֵ 
	printf("Max is %d\n",c);//��û����׼������������� 
 } 
 
 int max(int x,int y)//����max�����������ȵ��� 
 {
 	int z;
 	z=x>y?x:y;//����ֱ��return��x>y?x;y��; 
 	
 	return z;//����ֵ������Ľ������� 
  } 
