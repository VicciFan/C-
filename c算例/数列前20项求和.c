#include<stdio.h>
int main()
{
    int d;
    double a,b,c,t,Sn=0;
    for (a=1.0,b=2.0,d=0;d<20;d++)
    {
        c=b/a;
		t=b;
		b=b+a;
		a=t;
		Sn=Sn+c;
    }
	printf("%f",Sn);
	return 0;
}
