#include<stdio.h>//���롢���������ַ� �ٵ�������ʮ���鷳��ֱ������Ƚ� 

int main()                           
{
	int i,num,characters,others;
	
	char a[5];
	num=0;
	characters=0;
	others=0;
	
	printf("please input ramdon ten char:\n");
	
	for( ;a[5]!='\n' ; )//������û������Ȼ������ѭ�� 
	{
		scanf("%c",&a[5]);
	}
	for(i=1;i<=5;i++)//while((c=getchar())!=EOF)�����Ϊ��ֹ������һֱѭ�� 
	{
		if((a[i]>48||a[i]==48)&&(a[i]<57||a[i]==57))//<=������==�ĵ�����˼ 
		{
			num=num+1;
		}
		else if ((a[i]>65||a[i]==65)&&(a[i]<122||a[i]==122))//c�ӡ������޷�������ǰ��char c�� 
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
