#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
ll cnt(string s){
    ll count=1,ans=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1])                           //complexity O(n) 0.01s
            count++;
        else{
            ans=max(ans,count);
            count=1;
        }
    }
    ans=max(ans,count);
    return ans;
}
int main(){
    fs()
    string s;
    cin>>s;
    cout<<cnt(s)<<endl;

}
