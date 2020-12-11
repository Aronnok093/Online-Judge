 #include<bits/stdc++.h>
using namespace std;

int sum(int x){
    int sum=0,r;
    while(x){

        r=x%10;
        sum+=(r*r);
        x/=10;
    }
    return sum;
}
int main()
{
    int num,c,f,t;
    cin>>t;

    for(int i=1;i<=t;i++){
        cin>>num;
        c=num;
        int k=0;

        while(1){
                c=sum(c);
                if(c==1){
                    f=1;
                    break;
                }
                if(c==num  || k++>1000) {
                    f=0;
                    break;
                }
        }
        if(f==1) printf("Case #%d: %d is a Happy number.\n",i,num);
        if(f==0) printf("Case #%d: %d is an Unhappy number.\n",i,num);
    }
    return 0;
}
