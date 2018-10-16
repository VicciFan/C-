#include <stdio.h>
#include <math.h>

int main()
{
	int m,n,i,a;
	scanf("%d,%d",&m,&n);
	for(i=1;i<=m&&i<=n;i++)
	{
		if(m%i==0&&n%i==0)
			{
					for(a=i+1;a<=m&&a<=n;a++)
					{
						if(m%a==0&&n%a==0)
							break;
					}
					if(a>m||a>n)
							printf("The result is %d!\n",i);
			}
	}
	return 0;
}
