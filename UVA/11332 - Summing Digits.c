#include<stdio.h>
int main(){
    int term;
    long long int num,sum,temp,i;
    while(scanf("%lld",&num)!=EOF){
            if(num==0){
                break;
            }
            sum=0;
            while(1){

                while(num!=0){
                    sum=sum+num%10;
                    num=num/10;
                }
                if(sum/10==0)
                    break;
                else{
                    num=sum;
                    sum=0;
                }
            }
            printf("%lld\n",sum);

    }
    return 0;
}
