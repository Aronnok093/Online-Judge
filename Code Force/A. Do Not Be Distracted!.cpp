#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int len,flag=0;
        cin>>len;
        string s,ss="";
        cin>>s;
        for(int i=0;i<len;i++){
            if(s[i]!=s[i+1])
                ss+=s[i];
        }
        vector<bool>ans(26,false);
        int ln=ss.size();
        for(int i=0;i<ln;i++){
            int x=ss[i]-'A';
            if(ans[x]==false)
                ans[x]=true;
            else{
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

}
