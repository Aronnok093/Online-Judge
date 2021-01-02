#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string s,s1,ans;
        //vector<char>ans;
        int ln;
        cin>>ln;
       // int sz=ln/4;
        cin>>s;
        for(int i=0;i<ln;i+=4){
            s1=s.substr(i,4);
        bitset<8>bits(s1);
        int ab = bits.to_ulong();
        cout<<(char)(ab+97);
        }
        cout<<endl;
    }
    return 0;
}
