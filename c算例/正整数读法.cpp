#include<stdio.h>
#include<string.h>

int main()
{
	char a[15][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char b[10][5] = {"qian","bai","shi","wan","qian","bai","shi"};
	char num[10];
	int len,i,j;
	scanf("%s",num);
	len = strlen(num);

	for(i=0;i<len;i++) {
		j = num[i] - 48;
		if(j!=0 && i!=0)
			printf(" ");
		if(len==1&&j==0)
			printf("ling");
		if(j != 0 && len-i != 5 && len-i != 1) {
			if( (len-i==6 && num[len-6]=='1' && len==6) || (len-i==2 && num[len-2]=='1' && len==2) )
				printf("%s",b[2]);
			else
				printf("%s %s",a[j],b[8-len+i]);
		}
		else if(len-i == 5)	{
			if( (len==8||len==7) && num[len-6]=='0' && j!=0)
				printf("%s ",a[0]);
			if(j!=0)
				printf("%s",a[j]);
			printf(" %s",b[3]);
		}
		else if(len-i == 1)	{
			if(len>2 && num[len-2]=='0' && j!=0)
				printf("%s %s",a[0],a[j]);
			else if(j != 0)
				printf("%s",a[j]);
		}
		else if(len-i!=6 && len-i!=2 && num[i+1]!='0')
				printf(" %s",a[0]);
	}
	printf("\n");
	return 0;

}
