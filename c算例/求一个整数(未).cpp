#include <stdio.h>
#include <math.h>
long IsSquare(long x);
int main()
{
    long a;
    for(a=1;a<=100000;a++)
    {
        if(IsSquare(a+100)==1&&IsSquare(a+278)==1)
            printf("%ld\n",a);
    }
    return 0;
}
long IsSquare(long x)
{
     float i;
     int a;
     i=sqrt(x);
     for(a=1;a<=i;a++)
     {
         if(a*a==x)
         {   return 1;
             break;
         }
     }
     if(a*a!=x)
         return 0;
}
     
