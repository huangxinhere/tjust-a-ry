#include<stdio.h>

int main()
{
	int a[3][3];
	int i,j;
	for (j=0;j<=2;j++)
	{
		 
		for (i=0;i<=2;i++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[j][i]);//敲回车表示输入完成，会自动执行下一个程序 
			//printf和scanf一一对应了，没有p空格回车都可以 
		 } 	
	}
	for (j=0;j<=2;j++)
	{
		 
		for (i=0;i<=2;i++)
		{
			if( 1== i||1==j)//比我之前排除含0，2等等要快多了；选择方法 
			{
				printf("%6d",a[i][j]);
			 } 
			 else
			 {
			 	printf("%6c",' ');//取代也是空格输出；牢记字符型对应键盘 
			 }//因为本来就是另取地方输出，而不是在原来地方取代 
		 } 
		 printf("\n");	
	}
 } 
