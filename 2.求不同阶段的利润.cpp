#include<stdio.h>

int main()
{
	long int i,bonus ;//首先要根据要求确定数据类型 
	long int bonus1,bonus2,bonus3,bonus4,bonus5; 
	scanf("%ld",&i);//学会快速复制格式 
	
	bonus1=100000*0.1;//阶梯式，每阶段的算法都要考虑(看清题目)，重复的可用变量代替 
	bonus2=bonus1+100000*0.75;//比switch好，少打一些 
	bonus3=bonus2+200000*0.5;
	bonus4=bonus3+200000*0.3;
	bonus5=bonus4+400000*0.15;
	
	if(i<=100000) bonus=i*0.1;  //条件可联合关系符？
	else if(i<=200000) bonus=bonus1+(i-100000)*0.075;//大于十万自动跳到下一个程序，不担心会重合 
	else if(i<=400000) bonus=bonus2+(i-200000)*0.05;
	else if(i<=600000) bonus=bonus3+(i-400000)*0.03;
	else if(i<=1000000) bonus=bonus4+(i-600000)*0.015;
	else bonus=i*0.1;  bonus=bonus5+(i-1000000)*0.01;
	
printf("bonus=%d",bonus);

}
