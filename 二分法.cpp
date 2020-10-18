#define M 10 
#include<stdio.h>

int main ()//取变量还是取不好；取值—数组a[]或许括号里面变就好——序号还是值本身有规律？ 
{
	int low,high,mid,n,m;
	int a[M]={-12,0,6,16,23,56,80,100,110,115};
	low=0; 
    high=M-1; //a[high]=a[M-1]; 这样high与m减一根本不对应，所以high还是零 
	
	
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
