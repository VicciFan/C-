#include<stdio.h>
int gcd(int a,int b);
int main()
{
	int a,b,c;
	scanf("%d,%d",&a,&b);
	c = gcd(a,b);
	printf("The result is %d!",c);
	return 0;
}

int gcd(int a,int b)
{
	int i,t;
	t=a<b?a:b;
	for(i=t;i>0;i--)
	{
		if (a%i==0&&b%i==0)
		{
			return i;
		}
	}
	return 1;
}