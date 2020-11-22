#include<stdio.h>
int main(){
    int me,lift,dif,i,term,time;
    scanf("%d",&term);
    for(i=0;i<term;i++){
        scanf("%d%d",&me,&lift);
        if(me>lift){
            dif=((me-lift)*2)+lift;
            time=dif*4+19;
        }
        else{
            time=lift*4+19;
        }
    printf("Case %d: %d\n",i+1,time);
    }

}
