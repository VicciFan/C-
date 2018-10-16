#include<stdio.h>
main()
{
    int a,b,t;
    int r,x;
    scanf("%d %d",&a,&b);
    x=a*b;
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    printf("%d\n",x/a);
}
