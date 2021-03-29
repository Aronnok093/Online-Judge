#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll sumOfDigit(ll num){
    ll sum=0;
    while(num){
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll num,ans;
        cin>>num;
        while(1){
            ans=__gcd(num,sumOfDigit(num));
            if(ans>1)
                break;
            else{
                num++;
            }
        }
        cout<<num<<endl;

    }
    return 0;
}
