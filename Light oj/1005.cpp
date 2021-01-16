#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll solve(ll r, ll c, ll k){
    if(r<k||c<k){
        return 0;
    }
    else if(k==(ll)0){
        return 1;
    }
    else if(r==(ll)1){
        return c;
    }
    else
        return c*(solve(r-1,c-1,k-1))+solve(r-1,c,k);

}
int main(){
    int t,count=0;
    cin>>t;
    while(t--){
        count++;
        int n,k;
        cin>>n>>k;
        ll ans=solve(n,n,k);
        cout<<"Case "<<count<<": "<<ans<<endl;
    }
    return 0;
}
