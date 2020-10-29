#include<stdio.h>
#define FAILED -1
#define NUM 5//或许方便更改数组元素个数 

int search(int key,int a[],int no)//对应最好不要重复 
{
	int i;
	i=0;
	
	while (1)
	{
		if(i==no)	//if(a[i]==key)  return (i); 
		return (FAILED);//else	return (FAILED);
        if (a[i]==key)
        return i;
		i++;//有return直接跳出循环//原方法未轮到就跳出 
	}
}
int main()
{
	int a[NUM];
	int j,ky,m;
	
	for (j=0;j<=NUM;j++)
	{
		printf("a[%d]=",j);
		scanf("%d",&a[j]);//总是漏& 
		
	 } 
	 scanf("%d",&ky);
	 
	m= search(ky,a,NUM);//返回的是数值，所以要再弄个变量 
	 //函数调用数组只用a 
	 if (m==-1)
	 {
	 	printf("error\n");
	 }
	 else 
	 {
	 	printf("%d\n",m);
	 }
	 
 } 
