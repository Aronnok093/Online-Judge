#include<stdio.h>
int main(){
        unsigned long long array[10000],i,k,j,term,n;
        scanf("%llu",&term);
        for(i=0;i<term;i++){

            for(j=0;j<=5;j++){
                scanf("%llu",&array[j]);
            }
            scanf("%llu",&n);
            for(j=6;j<=n;j++){
                array[j]=(array[j-1]+array[j-2]+array[j-3]+array[j-4]+array[j-5]+array[j-6])%10000007;
            }

            printf("Case %llu: %llu\n",i+1,array[n]%10000007);
        }
        }


