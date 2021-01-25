#include<bits/stdc++.h>
#define fs() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;

int main(){
    fs()
    int t;
    cin>>t;
    for(int T=1;T<=t;T++){
        string st;
        cin>>st;
        int count=0,ans=0;
        bool flag=0;
        for(int i=0;i<st.size();i++){
            if(st[i]=='1'){
                count++;
                if(count>=3)
                    flag=1;
                if(flag)
                    ans++;
                flag=0;
                count=1;
            }
            else if(count) {flag=0;count++;}
    }
    cout<<"Case "<<T<<": "<<ans<<endl;
  }
    return 0;
}
