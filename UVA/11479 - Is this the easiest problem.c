#include<stdio.h>
int main(){

    long long int term,a,b,c,i;
    scanf("%d",&term);
    for(i=0;i<term;i++){

        scanf("%lld%lld%lld",&a,&b,&c);
        if((a+b>c)&&(b+c>a)&&(a+c>b)){
            if(a==b&&a==c&&b==c){
                printf("Case %d: Equilateral\n", i+1);
            }
            else if(a==b||b==c||a==c){
                printf("Case %lld: Isosceles\n", i+1);
            }
            else{
                printf("Case %lld: Scalene\n", i+1);

            }

        }
        else{
            printf("Case %lld: Invalid\n",i+1);
        }
    }
    return 0;

}
