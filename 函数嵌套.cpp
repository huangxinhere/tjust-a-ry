#include<stdio.h>

long square (int p);
long factional(int q);//����Ƕ�׶��壬����������ǰ���� 

int main()//���ú����е����ݱ����붨�庯�����ݵı�����ͬ������a(b)�ó�������b�����������ֵ 
{         //������ֻ��˵��������ϵ��������return��������� 
	int i;
	long  s =0;
	
	for(i=2;i<=3;i++)
	{
		s=s+square(i); 
	}
	
	printf("the result is %ld\n",s);
 } 
 
long square(int p)//��Ҫ�ӣ�/Ҫ˵���������� 
 {
 	int k;
 	long r; 
 	long factorial(int );//ȷ������Ҫ��ò�֮ͬ������©���� 
 	
 	k=p*p;//����ִ����� 
 	r=factorial(k);//����ú�����ʽ��︳ֵ����һ���� 
	  
 	return r;//��������ֵ���ٻ�ȥȷ���������� 
 	
 }
 
long factorial(int q )
 {
 	int m;
 	int i; 
 	m=1;
 	
 	while(i)//��for(i=1;i<=q;i++) 
 	{
 		m=m*i;
 		i--;
	 }
	
	 
	return m; 
	
 }
