#include<stdio.h>
int main()
{
	int num[5][5],sum[15];
	int i,j,m=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		sum[m]=0;
		for(j=0;j<5;j++)
		{
			sum[m]=sum[m]+num[i][j];
		}
		m++;
	}
	for(i=0;i<5;i++)
	{
		sum[m]=0;
		for(j=0;j<5;j++)
		{
			sum[m]=sum[m]+num[j][i];
		}
		m++;
	}
	sum[m]=0;
	for(i=0;i<5;i++)
	{
		sum[m]=sum[m]+num[i][i];
	}
	m++;
	sum[m]=0;
	for(i=0,j=4;i<5;i++,j--)
	{
		sum[m]=sum[m]+num[i][j];
	}
	for(i=1;i<=m;i++)
	{
		if(sum[0]!=sum[i])
        break;
	}
	if(i-1!=m)
	{
	    printf("It is not a magic square!\n");
	}
	else
	{
		printf("It is a magic square!\n");
	}
	return 0;
}
