#include<stdio.h>
int max(int a, int b){
    int ans=(a>b)?a:b;
    return ans;
}
int main(){

    int m,n,r,c,term,i;
    scanf("%d",&term);
    for(i=0;i<term;i++){

        scanf("%d%d%d%d",&m,&n,&r,&c);
        printf("%d\n",max(r-1,m-r)+max(c-1,n-c)); // the Manhattan distance
    }
}
