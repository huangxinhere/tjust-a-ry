#include<stdio.h>

int main()
{
	int i,j,k;
	printf("i j k\n");//为了和后面的数据对应 
	for(i=0;i<2;i++)
	  for(j=0;j<2;j++)
	  for(k=0;k<2;k++)//for嵌套：先执行最里面的，后逐渐执行外面的(套娃)，但所有层有平行数据 
	  printf("%d %d %d\n",i,j,k);
 }
 /*k（第一）完成循环
   j（第二）每一次循环，都要完成k的完整循环
   i（第三）每一次循环，都要完成j的完整循环
   a次*b次*c次=总次数*/ 
