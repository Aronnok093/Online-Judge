#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main(){
    fs()
    ll n,s,d,x,y,count=0;
    cin>>n>>s>>d;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x<s&&y>d){
            count++;
        }                                      //complexity O(n);
    }
    if(count)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;

}
