#include<stdio.h>
#define sf scanf
#define pf printf

int main(){

    int term,a,b,i,j,sum;

    sf("%d",&term);
    for(i=0;i<term;i++){
        sum=0;
        sf("%d%d",&a,&b);
        for(j=a;j<=b;j++){
            if(j%2!=0){

                sum=sum+j;

            }

        }
        pf("Case %d: %d\n",i+1,sum);
    }
    return 0;


}
