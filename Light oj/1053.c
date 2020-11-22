#include<stdio.h>
#include<math.h>
int main(){
    unsigned long long int term,a,b,c,i,temp;
    double root;
    scanf("%llu",&term);
    for(i=0;i<term;i++){

        scanf("%llu%llu%llu",&a,&b,&c);
        if(a>=b&&a>=c){
            temp=a;
            a=c;
            c=temp;

        }
        else if(b>=a&&b>=c){
            temp=b;
            b=c;
            c=temp;

        }
        root=(double)a*(double)a+(double)b*(double)b;
        if((double)c==sqrt(root)){
            printf("Case %llu: yes\n",i+1);
        }
        else{
            printf("Case %llu: no\n",i+1);
        }

    }
}
