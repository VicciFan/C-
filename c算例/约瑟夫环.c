#include <stdio.h>
const int M = 3;
int main()
{
    int i,n,s=0;
    scanf("%d",&n);
    for (i=2;i<=n;++i)
    {
        s=(s+M)%i;
    }
    printf("%d\n", s+1);
    return 0;
}
