#include <stdio.h>
int mod(int m,int n);

int main()
{
	int a,b,i;
	scanf("%d,%d",&a,&b);
	i=mod(a,b);
	printf("The result is %d!\n",i);
	return 0;
}

int mod(int m,int n)
{
	int j;
	for(j=n;j>0;j--)
	{
		if(m%j==0&&n%j==0)
			break;
	}
	return j;
}
