#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define LL long long
#define DD double
#define MAX 20000000

int main()
{
	int t,k;
	DD n;
	LL m,j,i;
	scanf("%d",&t);
	k=1;
	while(t--)
	{
		scanf("%lf",&n);
		DD ans=sqrt(n);
		LL ant=(LL)(ans);
		printf("Case %d: ",k++);
		if(ans==ant)
		{
			if(ant%2==0)
			printf("%lld 1\n",ant);
			else if(ant&1)
			printf("1 %lld\n",ant);
		}
		else
		{
			LL sum=pow(ant+1,2);
			LL sun=pow(ant,2);
			LL flag=(LL)(sum-n);
			if(flag==ant)
			    printf("%lld %lld\n",ant+1,ant+1);
			else if(flag<ant)
			{
				if((ant+1)%2==0)
					printf("%lld %lld\n",ant+1,flag+1);
				else
				    printf("%lld %lld\n",flag+1,ant+1);
			}
			else
			{
				if((ant+1)%2==0)
				    printf("%lld %lld\n",(sum-sun)-flag,ant+1);
                else
                    printf("%lld %lld\n",ant+1,(sum-sun)-flag);
			}
		}
	}
	return 0;
}
