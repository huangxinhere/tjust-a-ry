#include<stdio.h>

int main()
{
	double a,b;
	
	printf("a=%f",a);   scanf("%f",&a);
	printf("b=%f",b);   scanf("%f",&b);
	
	printf("a除以b=%1.2f\n",a/b);//m代表结果整数部分的位数，n是小数部分的位数 
}    //其中m与n约去最大公因数，001.23前多出的0也会省略变成空格 
