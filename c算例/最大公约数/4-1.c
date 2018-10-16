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
	int i=1,t;
	for(i=1;i<=a;i++)
	{
		if (a%i==0&&b%i==0)
		{
			t=i;
		}
	}
	return t;
}