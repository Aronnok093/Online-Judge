#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
vector<ll>arr;
int main(){
    fs()
    ll temp,n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    for(auto it: arr){
        if(it!=x)
            cout<<it<<" ";
    }
    return 0;
}
