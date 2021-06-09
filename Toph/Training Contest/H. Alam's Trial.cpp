#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll sum(ll x, ll n)
{
    ll i, total = 0, multi = x;

    for (i = 1; i <=n; i++) {

        total +=pow(x,i);
    }
    return total;
}

int main()
{   ll t,count=1;
    cin>>t;
    while(t--){
        ll x,n,m;
        cin>>x>>n>>m;
        cout <<"Case "<<count++<<": "<<sum(x, n)%m<<endl;
    }
    return 0;
}
