#include<stdio.h>
int main(){
    int tr1,tr2,at,fe,ct1,ct2,ct3,i,term,c,sum;
    while(scanf("%d",&term)==1){

       for(i=1;i<=term;i++){

        scanf("%d%d%d%d%d%d%d",&tr1,&tr2,&fe,&at,&ct1,&ct2,&ct3);
        if(ct1<=ct2&&ct1<=ct3)
            c=(ct2+ct3)/2;
        else if(ct2<=ct1&&ct2<=ct3)
            c=(ct1+ct3)/2;
        else if(ct3<=ct1&&ct3<=ct2)
            c=(ct1+ct2)/2;
        sum=tr1+tr2+at+fe+c;
        if(sum>=90)
            printf("Case %d: A\n",i);
        else if(sum>=80)
            printf("Case %d: B\n",i);
        else if(sum>=70)
            printf("Case %d: C\n",i);
        else if(sum>=60)
            printf("Case %d: D\n",i);
        else if(sum<60)
            printf("Case %d: F\n",i);

                            }
                    }
                return 0;
}
