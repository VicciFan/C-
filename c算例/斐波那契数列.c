#include<stdio.h>
int main()
{
	unsigned int n,i;
	double ave,sum=0,num[55];
	num[0]=1;
	num[1]=1;
	scanf("%u",&n);
	for(i=0;i<n;i++)
	{
		sum=sum+num[i];
		num[i+2]=num[i]+num[i+1];
	}
	ave=sum/n;
	printf("the average:%.3f\n",ave);
	return 0;
}
