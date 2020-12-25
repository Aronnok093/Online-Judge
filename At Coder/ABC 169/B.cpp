#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define num (ll)1000000000000000000
int main(){

    ll t,x,ans=1;
    vector<long long>arr;
    cin>>t;
    for(ll i=0;i<t;i++){
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    if(arr[0]==0){
        cout<<0<<endl;
        return 0;
    }
    for(ll i=0;i<t;i++){
        if(arr[i]>num/ans){ // ex 4*10=40 100/40=2.5  40*3>100;
            cout<<-1<<endl;
            return 0;
        }
        ans*=arr[i];
    }

    cout<<ans<<endl;

}
