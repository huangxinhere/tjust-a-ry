#include<stdio.h>

int main()
{
	int c,na,nb,nc;//getchar��c��int 
	
	na=nb=nc;
	
	while((c=getchar())!= EOF)//���^Z��û��ֹͣ�� Ҫͬʱ����f6�ͻس� 
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
