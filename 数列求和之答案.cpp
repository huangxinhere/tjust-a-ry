#include<stdio.h>
#include<math.h>

int main()//大概是1-1/3+1/5…… 
{
	int s;
	float n,t,pi;
	t=1; pi=0; n=1.0; s=1;
	while (fabs(t)>1e-6)//fabs为了求具体精度；绝对值~1e-6即十的负六次方/因为有负号，所以要绝对值 
	{
		pi=pi+t; 
		n=n+2;
		s=-s;//巧妙代表一次循环不同正负一 
		t=s/n;
	}
	pi=pi*4;
	printf("pi=%10.10f\n",pi);
	 } 
