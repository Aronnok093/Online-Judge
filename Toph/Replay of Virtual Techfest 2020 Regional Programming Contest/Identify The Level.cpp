#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    fs();
    ll t,cnt=1;
    cin>>t;
    while(t--){
        ll n,count=0;
        cin>>n;
        while(n!=0){
            n/=2;
            count++;
        }
        cout<<"Case "<<cnt++<<": "<<count<<endl;
    }
    return 0;

}
/*
2
1
3

Case 1: 1
Case 2: 2

*/
