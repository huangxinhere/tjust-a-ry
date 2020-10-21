#include <stdio.h>
int main()
{
    char a,b;
    a=getchar();
    b=getchar();
    putchar(a);
    putchar(b);
}//a=x b='\n'
/*当开始打x的时候，x在缓冲区，按下回车的时候，第一个getchar()才获取到x这个值 顺利存到a里 
但回车既是确定又是字符，也跟着进了缓冲区，并且和x一起被释放，x到了程序里 回车（'\n'）也到了程序里，
并且被第2个 getchar（）获取，此时输入y，这时缓冲区里有一个字符 'y', 按下回车
'y'和'\n'又一起准备被释放，由于程序里没有第3个getchar(),所以'y'和'\n'还留在缓冲区，
但它们两个已经是在准备状态中，如果程序又出现一个getchar(),'y'不需要你按回车它会直接进入到第3个getchar()，
getchar()是依次获取，按先后顺序，不会先获取'\n',而'\n'正等待着马上进入第4个getchar() 
