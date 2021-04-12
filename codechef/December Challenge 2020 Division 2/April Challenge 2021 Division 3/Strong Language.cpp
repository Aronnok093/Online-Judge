#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,count=0,ans=0;
        cin>>a>>b;
        string s;
        cin>>s;
        for(int i=0;i<a;i++)
        {
            if(s[i]=='*')
                count++;
            else{
                ans=max(count,ans);
                count=0;
            }
        }
         ans=max(count,ans);
        if(ans>=b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
