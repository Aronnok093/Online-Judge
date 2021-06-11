#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int len=s.size()-1,type=0;
    int temp=s[len-2]-'0';
    if(0<=temp&&temp<=9)
        type=2;
    else
        type=1;
    if(type==1){
        for(int i=8;i<=len-3;i++)
            cout<<s[i];
        cout<<endl;
    }
    else{
        string nw="";
        int range=s[len-2]-'0';
        for(int i=8;i<=len-6;i++){
            nw+=s[i];
        }
    for(int i=0;i<range;i++)
        cout<<nw<<endl;
    }
    return 0;
}
