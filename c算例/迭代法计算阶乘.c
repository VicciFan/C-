#include<stdio.h>
long long Fact(int n);
int main()
{
    int m;
    long long ret;
    scanf("%d",&m);
    ret=Fact(m);
    printf("%d!=%lld\n",m,ret);
    return 0;
}
long long Fact(int n)
{
    int i;
    long long result=1;
    for(i=2;i<=n;i++)
    {
        result*=i;
    }
    return result;
}
