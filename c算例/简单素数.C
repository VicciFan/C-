#include<stdio.h>
#include<math.h>
int main()
{
	long sum,n;
    long t,r,e;
	sum=-1;
	scanf("%ld",&n);
	for(t=1;t<=n;t++)
	{
		r=(int)sqrt(t);
		for(e=2;e<=r;e++)
		{
			if(t%e==0)
			goto then;
		}
		then: if(e>r)
			sum = sum+t;
	}
	printf("%ld",sum);
	return 0;
}
