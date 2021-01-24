#include<bits/stdc++.h>
#define fs() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;

int main(){
    fs()
    ll t,l,r,dif;
    cin>>t;
    while(t--){
        cin>>l>>r;                        //complexity O(n) 0.18 s
        dif=(r-l)+1;
        cout<<dif*2-1<<endl;
    }
    return 0;
}
