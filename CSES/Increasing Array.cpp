#include <bits/stdc++.h>
#define fs() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
int main() {
    fs()
    ll t,pre,in,steps=0;
    cin>>t>>pre;
    t--;
    while(t--){
        cin>>in;
        if(in<pre)
            steps+=(pre-in);                 // Complexity O(n)  0.05s
        else
            pre=in;

    }
    cout<<steps<<endl;

    return 0;
}
