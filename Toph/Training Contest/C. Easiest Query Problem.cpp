#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll len,t,x;
    stack<ll>q;
    vector<ll>arr;
    vector<bool>visited(1000000+2,false);
    cin>>len>>t;
    for(ll i=0;i<len;i++){
        cin>>x;
        arr.push_back(x);
    }
    for(ll i=0;i<t;i++){
        cin>>x;
        visited[x]=true;
        q.push(x);
    }
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    for(auto it: arr){
        if(!visited[it])
            cout<<it<<" ";
    }
    cout<<endl;

    return 0;

}
