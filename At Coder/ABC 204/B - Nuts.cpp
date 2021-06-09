#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,ans=0;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>10){
            ans+=abs(x-10);
        }
    }
    cout<<ans<<endl;
    return 0;

}
