#include <stdio.h>
#include <math.h>

int ara[1001],k, cnt, j, tmp;

void square(int ara[])
{
    for(k=1; k<=32; k++)
        ara[k*k]=-1;
}

void devisor(int ara[])
{
    for(k=1; k<=1000; k++)
    {
        tmp = sqrt(k);
        for(j=1, cnt=0; j<=tmp; j++)
        {
            if(k%j==0)
                cnt++;
        }
        ara[k]+=(cnt*2);
    }
}

int main()
{
    int tst, i, fnl[1001], n;
    scanf("%d", &tst);
    int l=2; fnl[1] = 1;
    square(ara);
    devisor(ara);
    for(j=2; j<=32; j++)
    {
        for(k=1000; k>=2; k--)
        {
            if(ara[k]==j)
            {
                fnl[l]=k;
                l++;
            }
        }
    }
    for(i=1; i<=tst; i++)
    {
        scanf("%d", &n);
        printf("Case %d: %d\n", i, fnl[n]);
    }
    return 0;
}
