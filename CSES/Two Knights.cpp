#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
        ll ans=i*i*(i*i-1)/2;
        ans-=4*(i-1)*(i-2);
        cout<<ans<<endl;
    }
    return 0;
}
