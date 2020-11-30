#include<stdio.h>
int main(){
    int term;
    scanf("%d",&term);
    while(term--){

        int x;
        scanf("%d",&x);
        int k=1;
        int step=0;
        int ans =0;

        while(ans<x){
            ans=ans+k;
            k=k+1;
            step++;

        }
        if(ans==(x+1)){
            step++;

        }
        printf("%d\n",step);

    }

}
