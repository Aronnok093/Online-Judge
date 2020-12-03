#include<stdio.h>
int main()
{
    int term,a,b,c,i;
    scanf("%d",&term);
    for(i=0;i<term;i++){
        scanf("%d%d%d",&a,&b,&c);

        if(a>b&&a<c|| a>c&&a<b){
            printf("Case %d: %d\n",i+1,a);
        }
        else if(b>a&&b<c|| b>c&&b<a)
            printf("Case %d: %d\n",i+1,b);
        else{
            printf("Case %d: %d\n",i+1,c);
        }
    }
}
