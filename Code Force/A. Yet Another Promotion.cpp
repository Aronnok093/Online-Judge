//imagination better than knowledge
//aranyak093
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

   #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif

    ll t;
    cin>>t;
    while(t--){
        ll a,b,n,m;
        cin>>a>>b>>n>>m;
        if(n<=m){
            cout<<n*min(a,b)<<endl;
        }
        else{
            ll mx_m=n*1.0/(m+1);
            ll remain=n-(mx_m*(m+1));
            ll ans_one=(mx_m*a*m)+(remain*min(a,b));
            ll ans_two=m*a+(n-m-1)*b;
            ll ans=min(ans_one,ans_two);
            ans=min(ans,n*min(a,b));
            cout<<ans<<endl;
        }
    }

    return 0;

}
