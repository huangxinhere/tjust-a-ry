#include<stdio.h>

int main()
{
	int i,max,a[10];//对于输入的多个无规律的数字进行检验时，数组可以实现多个变量赋值
	printf("input 10 numbers:\n");
	for (i=0;i<10;i++)
	   scanf ("%d",&a[i]);//循环对象在for语句里面，所以输入的也在里面（输入完成用回车可以理解逐个循环，而空格似乎也有下个输入数的意思） 
	max=a[0];//比较大小又用到赋值法，从循环第一项开始
	for(i=1;i<10;i++)
	   if(a[i]>max)
	   {
	   	max=a[i];
		} 
		printf("maxnum=%d\n",max);//如果输入的个数不足，则敲回车也不会执行 
}
