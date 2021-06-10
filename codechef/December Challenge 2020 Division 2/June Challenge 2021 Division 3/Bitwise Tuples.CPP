#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
ll solve(ll n, ll m){
    ll ans=1;
    while(m>0){
        if(m%2==1){
            ans=(ans*n)%mod;
        }
        n=(n*n)%mod;
        m/=2;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,m,ans;
        cin>>n>>m;
        ans=solve(2,n)-1;
        ans=solve(ans,m);
        cout<<ans<<endl;
    }

    return 0;
}
