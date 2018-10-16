#include<stdio.h>
int main()
{
	int yea,mon,day,a;
	scanf("%d.%d.%d",&yea,&mon,&day);
	switch (mon)
	{
		case 1:
			a = day;
			break;
		case 2:
			a = 31+day;
			break;
		case 3:
			a = 59+day;
			break;
		case 4:
			a = 90+day;
			break;
		case 5:
			a = 120+day;
			break;
		case 6:
			a = 151+day;
			break;
		case 7:
			a = 181+day;
			break;
		case 8:
			a = 212+day;
			break;
		case 9:
			a = 243+day;
			break;
		case 10:
			a = 273+day;
			break;
		case 11:
			a = 304+day;
			break;
		default:
			a = 334+day;
	}
	if(((yea%4==0&&yea%100!=0)||(yea%400==0))&&mon>2)
		a++;
	printf("%d\n",a);
	return 0;
}
