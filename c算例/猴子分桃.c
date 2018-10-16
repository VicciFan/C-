#include<stdio.h>
int main()
{
	int m,n,k,j,i;
	scanf("%d %d",&n,&k);
	for(m=n;;m++)
	{
		for(j=1,i=m;j<=n;j++)
		{
			if((i-k)%n!=0||i==1)
				break;
			else
				i=(i-k)/n*(n-1);
		}
		if(j==n+1)
			break;
	}
	printf("%d\n",m);
	return 0;
}