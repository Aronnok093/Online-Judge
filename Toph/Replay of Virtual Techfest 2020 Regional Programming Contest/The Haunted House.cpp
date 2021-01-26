#include <bits/stdc++.h>
#define fs() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;

int main(){
    fs()
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len=s.size();
        len/=2;
        len--;
        for(len;len>=0;len--){
            cout<<s[len];
        }
        cout<<endl;
    }
    return 0;
}
