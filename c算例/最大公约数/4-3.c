#include<stdio.h>
int gcd(int a,int b);
int main()
{
	int a,b,c;
	scanf("%d,%d",&a,&b);
	c = gcd(a,b);
	printf("The result is %d!\n",c);
	return 0;
}

int gcd(int a,int b)
{
	int r;
	do
	{
		r=a%b;
		a=b;
		b=r;
	}while (r!=0);
	return a;
}