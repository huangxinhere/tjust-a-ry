#include<stdio.h>

long square (int p);
long factional(int q);//不能嵌套定义，就在主函数前定义 

int main()//调用函数中的数据变量与定义函数内容的变量不同，理解成a(b)得出的是由b计算出来的数值 
{         //而定义只是说明函数关系——所以return的是最后结果 
	int i;
	long  s =0;
	
	for(i=2;i<=3;i++)
	{
		s=s+square(i); 
	}
	
	printf("the result is %ld\n",s);
 } 
 
long square(int p)//后不要加；/要说明数据类型 
 {
 	int k;
 	long r; 
 	long factorial(int );//确定类型要想好不同之处，不漏不错 
 	
 	k=p*p;//具体执行语句 
 	r=factorial(k);//结果用函数形式表达赋值给另一变量 
	  
 	return r;//返回最终值，再回去确定数据类型 
 	
 }
 
long factorial(int q )
 {
 	int m;
 	int i; 
 	m=1;
 	
 	while(i)//或for(i=1;i<=q;i++) 
 	{
 		m=m*i;
 		i--;
	 }
	
	 
	return m; 
	
 }
