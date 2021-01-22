#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    fs()
    ll t,sum=0,n,ans,sum1;
    cin>>t;
    sum1=t*(t+1)/2;
    t-=1;

    while(t--){
        cin>>n;                 //complexity O(n) expected 0.01 s worst case 0.03 s
        sum+=n;
    }
    ans=sum1-sum;
    cout<<ans<<endl;

}
