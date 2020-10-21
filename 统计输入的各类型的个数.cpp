#include<stdio.h>//放入、编好输入的字符 再调出来用十分麻烦，直接输入比较 

int main()                           
{
	int i,num,characters,others;
	
	char a[5];
	num=0;
	characters=0;
	others=0;
	
	printf("please input ramdon ten char:\n");
	
	for( ;a[5]!='\n' ; )//这里面没条件当然跳不出循环 
	{
		scanf("%c",&a[5]);
	}
	for(i=1;i<=5;i++)//while((c=getchar())!=EOF)如果不为终止符，将一直循环 
	{
		if((a[i]>48||a[i]==48)&&(a[i]<57||a[i]==57))//<=不符合==的等于意思 
		{
			num=num+1;
		}
		else if ((a[i]>65||a[i]==65)&&(a[i]<122||a[i]==122))//c加‘’将无法操作，前有char c？ 
		{
			characters=characters+1;
		}
		else
		{
			others=others+1;
		}
		
	}
	printf("num=%d\ncharacters=%d\nothers=%d",num,characters,others);
 } 
