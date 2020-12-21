#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,s,temp,x,count,ans;
    string st;
    cin>>t;
    while(t--){
       cin>>s;
       temp=120-s;
       count=0;
        cin>>st;
        for(int i=0;i<s;i++){
            if(st[i]=='1')
                count++;
        }
        ans=(count+temp)*100;
        ans=ans/120;
        if(ans>=75)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;

}
