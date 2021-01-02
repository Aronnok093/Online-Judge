#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string s,s1,ans;
        int ln;
        cin>>ln;
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
