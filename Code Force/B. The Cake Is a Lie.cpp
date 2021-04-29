
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z,ans;
        cin>>x>>y>>z;
        ans=x*y;
        if(ans-1==z)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;

}
