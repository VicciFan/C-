#include<stdio.h>
#include<math.h>
int input();
long sumofprime(int n);
int  isprime(int m);
void output(long int n);
int main()
{
	int i,add=0,a,b;
	a=input();
	for(i=2;i<a+1;++i)
	{
		b=isprime(i);
        add=sumofprime(b);
	}
	output(add);
	return 0;
}

int input()
{
	int n;
	scanf("%d",&n);
	return n;
}

long sumofprime(int n)
{
	static int add;
	add+=n;
	return add;
}

int isprime(int m)
{
	int i;
	for(i=2;i<((int)sqrt(m)+1)&&(m%i);++i);
	if(i==(int)sqrt(m)+1)
	{
		return m;
	}
	else
	{
		return 0;
	}
}

void output(long int n)
{
	printf("%ld",n);
}

