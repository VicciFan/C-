#include <stdio.h>
void gcd(int m,int n)
{
	if(m%n!=0)
		gcd(n,m%n);
	else
		printf("The result is %d!\n",n);
}
int main()
{
	int b,c;
	scanf("%d,%d",&b,&c);
	gcd(b,c);
	return 0;
}
