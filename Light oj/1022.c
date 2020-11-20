#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

    int term,i;
    double radious,length;

    scanf("%d",&term);
    for(i=0;i<term;i++){
        scanf("%lf",&radious);
        length=radious*2;
        printf("Case %d: %.2lf\n",i+1,(length*length)-(2*acos(0.0)*radious*radious));

    }
    return 0;

}
