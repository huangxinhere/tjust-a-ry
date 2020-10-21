#include<stdio.h>

int main()
{
	char a,b,c;
	scanf("%c",&a);
	scanf("%c",&b);
	scanf("%c",&c);
	printf("%c\n",a);
	printf("%c\n",b);
	printf("%c\n",c);
	
	return 0;//a='q',b='\n',c='w'
	
 } 
 /*我们从键盘上输入a后按回车，a和回车符都被存储到了缓冲区，
 a被第一个回车符读取，回车符被第二个scanf读取，因此输出a后换两次行。
 
 字符型就会有这种情况，因为回车空格也是字符*/ 
