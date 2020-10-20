#include<stdio.h>

int main()//如果是float max，以后都要改为f，要同类型，否则因转换而变数据 
{
	int max(int x,int y);//对max函数的声明 ；形参 
	int a,b,c;
	
	scanf("%d%d",&a,&b);
	c=max(a,b);//实参 ,调用max取值 
	printf("Max is %d\n",c);//若没有找准变量会出现乱码 
 } 
 
 int max(int x,int y)//这是max具体运作。先调用 
 {
 	int z;
 	z=x>y?x:y;//或者直接return（x>y?x;y）; 
 	
 	return z;//返回值即上面的结果，输出 
  } 
