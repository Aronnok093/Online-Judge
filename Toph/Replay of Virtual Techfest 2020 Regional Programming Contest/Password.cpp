#include<bits/stdc++.h>
#define fs() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
int main(){
    fs()
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll len=s.size();
        bool cnt1,cnt2,cnt3,cnt4;
        cnt1=cnt2=cnt3=cnt4=false;
        if(len<10){
            cout<<"NO"<<endl;
        }
        else{
            for(int i=1;i<len-1;i++){
                if('a'<=s[i]&&s[i]<='z')
                    cnt1=true;
                if('A'<=s[i]&&s[i]<='Z')                                            ///complexity O(1)+O(n) 0.18s
                    cnt2=true;
                if('0'<=s[i]&&s[i]<='9')
                    cnt3=true;
                if(s[i]=='@'||s[i]=='#'||s[i]=='%'||s[i]=='&'||s[i]=='?' )
                    cnt4=true;
            }
            if('a'<=s[0]&&s[0]<='z'||'a'<=s[len-1]&&s[len-1]<='z')
                    cnt1=true;


        if(cnt1&&cnt2&&cnt3&&cnt4)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
    }
    return 0;

}
