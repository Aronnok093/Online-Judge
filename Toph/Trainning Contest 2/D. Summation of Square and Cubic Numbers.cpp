#include<bits/stdc++.h>
#define ll long long int
#define range 31622
using namespace std;
vector<ll>sq(range);
vector<ll>q(range);
void ts(){
    for(ll i=1;i<=range;i++){
        sq[i]=i*i;
        q[i]=i*i*i;
    }

}
int main(){
    ts();
    ll t;
    cin>>t;
    while(t--){
        ll n,flag=1;
        cin>>n;
        ll tt=sqrt(n);
        for(ll i=1;i<=tt;i++){
            for(ll j=1;j<=tt;j++)
                if(sq[i]+q[j]==n){
                    cout<<"YES"<<endl;
                    flag=0;
                    goto x;
                }
        }
        x:
            if(flag)
                cout<<"NO"<<endl;

    }
    return 0;
}
