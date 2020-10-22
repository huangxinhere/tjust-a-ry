#include<stdio.h>

int main()//引用键盘字符c=‘’，类型是char：声明加格式 
{
	int a,b;
	char c;
	printf("input expression:a+-*/b \n ");
	scanf("%d%c%d",&a,&c,&b);
	switch(c)
	{
	case'+':printf("%d\n",a+b);break;
	case'-':printf("%d\n",a-b);break;
	case'*':printf("%d\n",a*b);break;
	case'/':printf("%d\n",a/b);break;
	default:printf("error!/n");break;         
    }
 } //输出时一定要带printf；输入符号要char，然后是scanf对应也要写 
