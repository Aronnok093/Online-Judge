#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(getline(cin,s)){
        int len=s.size();
        for(int i=0;i<len;i++){
            char c=s[i]-7;
            cout<<c;
        }
        cout<<endl;
    }
    return 0;

}
