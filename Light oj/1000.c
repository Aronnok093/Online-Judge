#include<stdio.h>
int main(){
    int term,a,b,sum;
    scanf("%d",&term);
    int i;
    for(i=0;i<term;i++){
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("Case %d: %d\n",i+1,sum);
    }
    return 0;
}
