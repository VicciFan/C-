#include <stdio.h>
#include <math.h>
int main()
{
 int a,b,c,n;
 scanf("%d",&a);
  for (b=2;b<=a/2;b++)
   {
	for (n=2;n<=b;n++);
	{
		if(b%n==0)
		break;
		if(n>sqrt(b))
		 c=a-b;
		else
		break;
		for (n=2;n<=c;n++)
			if(c%n==0)
			break;
			if(n>sqrt(c))
			{
			printf("%d %d\n",b,c);
			break;
			}
	}
   }
  return 0;
}
