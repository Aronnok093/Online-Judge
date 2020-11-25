#include <stdio.h>

int cnt(long long n)
{
    int temp=0;
    for(long long i=1; i<=n; i*=2)
    {
        if(n & i)
            temp++;
    }
    return temp;
}

int main()
{
    int t,cases=0;
    scanf("%d",&t);

    while(t--)
    {
        long long n,ans;
        scanf("%lld",&n);

        for(long long i=1; i<=n; i*=2)
            if(n & i)
            {
                ans=n+i;
                break;
            }

        int diff=cnt(n)-cnt(ans);

        for(int i=0; i<diff; i++)
            ans+=(1<<i);

        printf("Case %d: %lld\n",++cases,ans);
    }
    return 0;
}
