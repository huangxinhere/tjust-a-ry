#include<stdio.h>
#define num//

	int top (void);
	int a[num];//
	
int main()
{
	int i,num;
	extern int a[];

	
	printf("input a num:\n");//
	for (i=1;i<=num;i++)
	{
		printf("%d:",i-1);
		scanf("%d",a[i]);
	}//完成输入 
	
	printf("最高成绩为:%d",top()); //输出结果 
	
	return 0;
 } 
 
 int top(void)//输入值不直接写数组？个数？ 
 {
 	int max,i;
 	extern int a[];//
 	max=a[0];//
 	
 	for(i=1;i<=num;i++)
 	{
 		if(a[i]>max)
 		{
 			max=a[i];
		 }
	 }
	 
	 return max;
  } 
