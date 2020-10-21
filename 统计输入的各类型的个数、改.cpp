#include<stdio.h>

int main()
{
	int c,na,nb,nc;//getchar的c是int 
	
	na=nb=nc;
	
	while((c=getchar())!= EOF)//输出^Z，没有停止？ 要同时按下f6和回车 
	{
		
		if((c>48||c==48)&&(c<57||c==57))
		{
			na=na+1;
		} 
		else if((c>65||c==65)&&(c<122||c==122))
		{
			nb=nb+1;
		 } 
		 else
		 {
		 	nc=nc+1;
		 }
	}
	printf("num=%d\ncharacters=%d\nothers=%d",na,nb,nc);
 } 
