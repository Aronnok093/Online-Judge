#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){

    int t;
    string s;
    char ch;
    cin>>t;
    getline(cin,s);
    while(t--){
        getline(cin,s);
        int len=s.size();
        int sq=sqrt(len);
        if(sq*sq!=len){
            cout<<"INVALID"<<endl;
        }
        else{
            for(int i=0;i<sq;i++){
                for(int j=0;j<sq;j++){
                    cout<<s[j*sq+i];
                }
            }
            cout<<endl;
        }
        s.clear();
    }
    return 0;

}
