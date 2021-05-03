#include<bits/stdc++.h>
#define  ll long long
using namespace std;

void sGP(ll l,ll r){
    vector<bool>pop(r-l+1,true);
    if(l==1)
        pop[0]=false;
    ll limit = sqrt(r);
    for(ll i=2;i<=limit;i++){
        for(ll j= max(i*i,(l+i-1)/i*i);j<=r;j+=i){
            pop[j-l]=false;
        }
    }

    for(ll i =0;i<r-l+1;i++)
        if(pop[i])
            cout<<i+l<<" ";
    cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        sGP(l,r);
    }
    return 0;
}
