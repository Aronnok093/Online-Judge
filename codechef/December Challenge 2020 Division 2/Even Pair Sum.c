#include<stdio.h>
int main(){

    long long int term,a,b,a_odd,a_even,b_odd,b_even,i;
    scanf("%lld",&term);
    for(i=0;i<term;i++){
        scanf("%lld%lld",&a,&b);

        if(a%2==0){
            a_odd=a/2;
            a_even=a/2;

        }
        else{

            a_odd=a/2+a%2;
            a_even=a/2;
        }
        if(b%2==0){
            b_odd=b/2;
            b_even=b/2;


        }
        else{
            b_odd=b/2+b%2;
            b_even=b/2;


        }
        printf("%lld\n",(a_odd*b_odd+a_even*b_even));

    }

    return 0;


}
