/*************************************************************************
	> File Name: test.c
	> Author: WeiZheng
	> Mail:1029660645@qq.com 
	> Created Time: Mon 16 Mar 2015 08:29:07 PM CST
 ************************************************************************/

#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main()
{
    int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		printf("%d\n",gcd(a,b));
	}

	return 0;
}
