#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
//Fixing bug like a kiss
int main(){
    fs()
    ll n,x,v,p,count=0,sum;

    cin>>n>>x;
    for(ll i=0;i<n;i++){
        cin>>v>>p;
        sum+=v*p;            //expected complexity O(n) 0.08s
        if(sum>x*100){
            count=i+1;
            break;
        }
    }
    if(count)
        cout<<count<<endl;
    else
        cout<<-1<<endl;
    return 0;

}
