#include<stdio.h>

int main()
{
	int score;
	printf("input a number: ");
	scanf("%d",&score);
	if (score>60)
	{
		printf("The score is E!\n");
	}
	else if((score >60||score==60)&&score<70)
	{
		printf("D\n");
	}
	else if((score>70||score==70)&&score<80)//与：两个都为真；或 ：只要一个为真——只要满足其中一个还是同时满足 
	{
		printf("C\n");
	 } 
	 else if((score>80||score==80)&&score<90)
	 {
	 	printf("B\n"); 
	 }
	 else
	 {
	 	printf("A\n");
	 }
}
//为什么结果总有A? --逻辑上有错误
/*else 后面不要加括号，否则会执行*/ 
