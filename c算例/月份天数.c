#include<stdio.h>
#include<string.h>

int main()
{
	char a[5];
	int b;
	gets(a);
	if(strcmp(a,"Jan")==0)
		b=31;
	else if(strcmp(a,"Feb")==0)
		b=28;
	else if(strcmp(a,"Mar")==0)
		b=31;
	else if(strcmp(a,"Apr")==0)
		b=30;
	else if(strcmp(a,"May")==0)
		b=31;
	else if(strcmp(a,"Jun")==0)
		b=30;
	else if(strcmp(a,"Jul")==0)
		b=31;
	else if(strcmp(a,"Aug")==0)
		b=31;
	else if(strcmp(a,"Sep")==0)
		b=30;
	else if(strcmp(a,"Oct")==0)
		b=31;
	else if(strcmp(a,"Nov")==0)
		b=30;
	else
		b=31;
	printf("The number of days is %d\n",b);
	return 0;
}