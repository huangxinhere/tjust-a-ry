#include<stdio.h>

int main()
{
	long int i,bonus ;//����Ҫ����Ҫ��ȷ���������� 
	long int bonus1,bonus2,bonus3,bonus4,bonus5; 
	scanf("%ld",&i);//ѧ����ٸ��Ƹ�ʽ 
	
	bonus1=100000*0.1;//����ʽ��ÿ�׶ε��㷨��Ҫ����(������Ŀ)���ظ��Ŀ��ñ������� 
	bonus2=bonus1+100000*0.75;//��switch�ã��ٴ�һЩ 
	bonus3=bonus2+200000*0.5;
	bonus4=bonus3+200000*0.3;
	bonus5=bonus4+400000*0.15;
	
	if(i<=100000) bonus=i*0.1;  //���������Ϲ�ϵ����
	else if(i<=200000) bonus=bonus1+(i-100000)*0.075;//����ʮ���Զ�������һ�����򣬲����Ļ��غ� 
	else if(i<=400000) bonus=bonus2+(i-200000)*0.05;
	else if(i<=600000) bonus=bonus3+(i-400000)*0.03;
	else if(i<=1000000) bonus=bonus4+(i-600000)*0.015;
	else bonus=i*0.1;  bonus=bonus5+(i-1000000)*0.01;
	
printf("bonus=%d",bonus);

}
