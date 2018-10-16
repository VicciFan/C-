#include<stdio.h>
#include<string.h>

int main()
{

	char a[100],b[100],c[100];
	int i,j,k,m,n,result=0;

	for(;;)
	{
		result=0;
		scanf("%s",a);
		if(strcmp(a,"0")==0)
			break;
		scanf("%s",b);
		m=strlen(a);
		n=strlen(b);

		for(i=0;i<=m-n;i++)
		{
			for(j=i,k=0;k<n;j++,k++)
			{
				c[k]=a[j];
			}
			c[k]='\0';
			if(strcmp(c,b)==0)
				result++;
		}

		printf("%d\n",result);
	}
	return 0;
}
