#include <bits/stdc++.h>
#define fs() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
int main(){
    fs()
    ll x,y;
    cin>>x>>y;
    ll ans=y*5-x*3;
    if(ans%2==0&&ans>-1)
        cout<<x-(ans/2)<<" "<<y-(ans/2)<<endl;
    else
        cout<<"Not possible"<<endl;
    return 0;
}
