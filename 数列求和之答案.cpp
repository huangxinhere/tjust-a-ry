#include<stdio.h>
#include<math.h>

int main()//�����1-1/3+1/5���� 
{
	int s;
	float n,t,pi;
	t=1; pi=0; n=1.0; s=1;
	while (fabs(t)>1e-6)//fabsΪ������徫�ȣ�����ֵ~1e-6��ʮ�ĸ����η�/��Ϊ�и��ţ�����Ҫ����ֵ 
	{
		pi=pi+t; 
		n=n+2;
		s=-s;//�������һ��ѭ����ͬ����һ 
		t=s/n;
	}
	pi=pi*4;
	printf("pi=%10.10f\n",pi);
	 } 
