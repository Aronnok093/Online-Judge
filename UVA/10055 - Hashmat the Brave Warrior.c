#include<stdio.h>
#include<math.h>
#define sf scanf
#define pf printf

int main(){
    long long int a,b;
    while(sf("%lld%lld",&a,&b)!=EOF){
        if(a>b)
            pf("%lld\n",(a-b));
        else
            pf("%lld\n",(b-a));

    }
    return 0;
}
