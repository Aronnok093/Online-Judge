#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int a,b,c,ans;
        cin>>a>>b>>c;
        ans=b+(100-a)*c;
        ans*=10;
        cout<<ans<<endl;

    }
    return 0;

}
