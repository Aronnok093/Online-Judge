#include <bits/stdc++.h>
#define fs() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;

int main(){
    fs()
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n==k){
            cout<<1<<endl;
        }
        else if(n==1)
            cout<<k<<endl;
        else if(n>k&&n%k!=0)
            cout<<2<<endl;
        else if(n>k&&n%k==0)
            cout<<1<<endl;
        else if(n<k&&k%n==0)
            cout<<k/n<<endl;
        else
            cout<<k/n+1<<endl;
    }
    return 0;

}
