#include<stdio.h>
int main(){

    int h1,m1,h2,m2,sum,time,hour,minuits,count;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)!=EOF){
        sum=h1+m1+h2+m2;
        if(sum==0)
            break;
        time=h1*60+m1;
        count=0;
        while(1){
            time++;
            count++;
            hour=time/60; minuits=time%60;
            if(hour==24&&minuits==0)
                {
                    time=0;
                }
            if(hour==h2&&minuits==m2)
                break;
        }
        printf("%d\n",count);

    }

}
