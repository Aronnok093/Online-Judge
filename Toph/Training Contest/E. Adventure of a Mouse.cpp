#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll l,r,x,y,count=0;
        cin>>l>>r;
        vector<bool>visited(r+2,false);
        ll tt;
        cin>>tt;
        for(ll i=0;i<tt;i++){
            cin>>x>>y;
            visited[x]=true;
            visited[y]=true;
        }
        for(ll i=l;i<=r;i++){
            if(visited[i]==false)
                count++;
        }
        cout<<count+1<<endl;
    }
    return 0;

}
