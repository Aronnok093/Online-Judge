#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll  r,b,x,pre,post,diff,d;
        cin>>r>>b>>d;
        x=min(r,b);
        if(r%x==0)
            pre=r/x;
        else
            pre=r/x+1;
        if(b%x==0)
            post=b/x;
        else
            post=b/x+1;
        diff=abs(pre-post);
        if(diff>d)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

}
