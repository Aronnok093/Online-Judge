#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    fs()
    double v,t,s,d;
    cin>>v>>t>>s>>d;                  // must use double lol O(1)
    double ans=d/v;
    if(ans>=t&&ans<=s)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    return 0;
}
