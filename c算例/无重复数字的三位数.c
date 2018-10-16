#include<stdio.h>
int main()
{
	int i,a,b,c,j=0;
	int num[1000]={0};
	for(i=102;i<987;++i)
	{
		a=i/100;
		c=i%10;
		b=(i-c-a*100)/10;
		if(a!=b&&b!=c&&c!=a)
		{
			num[j]=i;
			++j;
		}
	}
	printf("%d\n",j+1);
	for(j=0;num[j];++j)
	{
		printf("%d ",num[j]);
	}
	printf("987");
	return 0;
}
