#include<stdio.h>
//#include<string.h>//关于字符串的操作 ,不用也行？ 

int main() {

    float a[5] = {0};
    int i = 0;
    float sum = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%f",&a[i]);
        if (a[i] < 0)
        {
            sum += a[i];//sum=sum+a[i] 
        }
    }
    printf("sum=%f",sum);
}
