#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
vector<int>arr(26,0);
int main(){
    fs();
    int t;
    cin>>t;
    while(t--){
        string s,ans="";
        cin>>s;
        int len=s.size();
        for(int i=1;i<=len;i++){
           if(i%2!=0&&s[i-1]=='a')
                ans+='b';
           else if(i%2!=0&&s[i-1]!='a')
                ans+='a';
            else if(i%2==0&&s[i-1]=='z')
                ans+='y';
            else if(i%2==0&&s[i-1]!='z')
                ans+='z';
        }
        cout<<ans<<endl;
    }
    return 0;

}
