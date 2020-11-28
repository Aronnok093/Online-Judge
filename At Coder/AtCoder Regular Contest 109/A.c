#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){

    int a,b,x,y;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    int ans;
    if(2*x<y){
        ans=2*x*abs(a-b);
        if(a>b){
            ans-=x;
        }
        else{
            ans+=x;
        }
    }
    else if(b<a&&x<y){
        ans=y*(abs(a-b)-1)+x;
    }
    else{
    ans=y*abs(a-b)+x;
    }
    printf("%d\n",ans);
}
