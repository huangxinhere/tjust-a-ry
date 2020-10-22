#include<stdio.h>

int main()
{
	int year,leap;//可尝试用单词或其他表示方式表达变量 
	printf("input a year: ");//可利用注释注明意思，在大工程或长时间后好记 
	scanf("%d",&year);
	if(year%4==0)
	{
		if(year%100==0)//层层筛选：if嵌套，不符合的统一跳到else；else if 多种可能性并列且和为一 
		{              //和for嵌套比：从外到内 
		     if(year%400==0) 
		    {
		    	leap=1;
			 }     
		} 		
	 } 
	 else
	 {
	 	leap=0;//判断是非，再输出 
	 }
	 if(leap)
	 
	 printf("%d is a leap\n",year);
	 else
	 printf("%d is not a leap\n",year);
}
