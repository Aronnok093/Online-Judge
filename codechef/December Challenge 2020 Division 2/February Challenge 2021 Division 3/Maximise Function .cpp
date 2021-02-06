#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
vector<ll>arr;
int main(){
    fs()
    int t;
    cin>>t;
    while(t--){
        ll x,n,y,z;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        x=arr[0];
        y=arr[1];
        z=arr[n-1];
        ll ans=abs(x-y)+abs(y-z)+abs(z-x);
        cout<<ans<<endl;
        arr.clear();
    }
    return 0;

}
