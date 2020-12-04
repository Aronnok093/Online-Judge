#include<stdio.h>
int main(){

    int a,v1,b,v2,i=0,vacine=0,target;
    scanf("%d%d%d%d%d",&a,&v1,&b,&v2,&target);
    while(1){
        i++;

        if(i>=a)
            vacine=vacine+v1;
        if(i>=b)
            vacine=vacine+v2;
        if(vacine>=target)
            break;
    }
    printf("%d\n",i);
}
