#include<stdio.h>
#define pi 3.1415926535897932
int main(){
    unsigned long long term,m,n,i,temp,mult,temp2;
    scanf("%llu",&term);
    for(i=0;i<term;i++){
        scanf("%llu%llu",&m,&n);

        if(m>n){
            temp=m;
            m=n;
            n=temp;
        }
        if(m==1||n==1){
            mult=m*n;
        }
        else if(m==2||n==2){
            temp2=0;
            if(m==n){
                mult=m*n;
            }
            else if(n%2==1){
                mult=n+1;
            }
            else if(n%2==0){
                temp2=n/2;
                if(temp2%2==0){
                    mult=((m*n)/2);
                }
                else{
                    mult=m+n;
                }


            }
        }
        else{
            mult=(((m*n)+1)/2);

        }
        printf("Case %llu: %llu\n",i+1,mult);
    }


}
