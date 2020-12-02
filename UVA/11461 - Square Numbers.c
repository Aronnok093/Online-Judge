#include<stdio.h>
#include<math.h>
#define sf scanf
#define pf printf
int main(){
    int a,b,i,count,sq;
    while(1){

        sf("%d%d",&a,&b);
        if(a==0&&b==0)
            break;
        count=0;
        for(i=a;i<=b;i++){
            sq=sqrt(i);
            if(i==sq*sq)
                count++;
        }
        pf("%d\n",count);
    }
    return 0;


}
