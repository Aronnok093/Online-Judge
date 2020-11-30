#include <stdio.h>
int DecBin(int n)
{
        int multiplier = 1,result = 0;
        while(n>0)
        {

        result+=n%2*multiplier;
        multiplier*=10;
        n/=2;

        }
        return result;


}
int main()
{
        int T,da,db,dc,dd,ba,bb,bc,bd;
        scanf("%d",&T);
        int i;
        for(i =0; i<T;i++)
        {
                scanf("%d.%d.%d.%d",&da,&db,&dc,&dd);
                scanf("%d.%d.%d.%d",&ba,&bb,&bc,&bd);

                if(DecBin(da)==ba&&DecBin(db)==bb&&DecBin(dc)==bc&&DecBin(dd)==bd)
                printf("Case %d: Yes\n",i+1);
                else
                printf("Case %d: No\n",i+1);

        }
        return 0;


}
