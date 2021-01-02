#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

    int t;
    cin>>t;
    while(t--){
        ll n,k,d,sum=0,x,ans;
        cin>>n>>k>>d;
            for(int i=0;i<n;i++){
                cin>>x;
                sum=sum+x;
            }
        ans=sum/k;
        if(ans>=d)
            cout<<d<<endl;
        else{
            cout<<ans<<endl;
        }
    }
    return 0;

}
