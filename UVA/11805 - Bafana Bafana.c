#include<stdio.h>
int main()
    
{
    int T,N,K,i,P,D;
    scanf("%d",&T);
        for(i=1;i<=T;i++){
        scanf("%d%d%d",&N,&K,&P);
        D = K+P;
            while(D>N)
            {
                D = D - N;
            }
        printf("Case %d: %d\n",i,D);
        }

    return 0;
}
