#include <stdio.h>
int mod(int a,int b)
{
	int c;
	c=a%b;
	while(c!=0)
	{
		a=b;
		b=c;
		c=a%b;
	}
	return b;
}
int main()
{
	int m,n;
	scanf("%d,%d",&m,&n);
	n=mod(m,n);
	printf("The result is %d!\n",n);
	return 0;
}
