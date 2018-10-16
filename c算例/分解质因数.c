#include<stdio.h>
main()
{
    int n,i;
    scanf("%d",&n);
    printf("%d",n);
    printf("%c",'=');
    for(i=2;i<=n;)
    {
        if(n%i==0)
        {
            n=n/i;
            printf("%d",i);
            if(n!=1)
            {
                printf("%c",'*');
            }
        }
        else i++;
    }
    return 0;
}
