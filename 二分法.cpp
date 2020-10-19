#define M 10 
#include<stdio.h>

int main ()//取变量还是取不好；取值—数组a[]或许括号里面变就好——序号还是值本身有规律？ 
{
	int low,high,mid,n,m;
	int a[M]={-12,0,6,16,23,56,80,100,110,115};
	low=0; 
    high=M-1; //a[high]=a[M-1]; 这样high与m减一根本不对应，所以high还是零 
	
/*非法输入可以先排除
do
{
   scanf^
}while(m<=a[low]&&m>=a[high])先输入再判断，若错误继续输入*/	
	printf("input a searched number :\n");
	scanf("%d",&m);
	while (a[low]<=a[high])//最大小值变化过程中排列序号发生了改变，而n是不变的，所以错了—— 
	{
		mid=(high+low)/2;//变化的也要纳入循环中！ 
		if(a[mid]<m)
		{
			low=mid+1;
			
		 }
		 else if(a[mid]> m)
		 {
		 	high=mid-1;
		
		  }
		  else
		  {
		  	printf("The found number is%d\n",a[mid]);break;
		   } 
	}
	if (a[low]>a[high])
	printf("The specific number can not be found\n"); 
}
/*do
{
	scanf("%d",&a);
 } while (不符合条件的条件);
 因为重新要取代scanf时位置已被占据，不能更改，
 用getchar（）消耗这个字符 
  */
