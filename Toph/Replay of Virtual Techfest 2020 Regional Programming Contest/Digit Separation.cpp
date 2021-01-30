#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    fs()
    string s,x;
    while(cin>>s){
        int len= s.size();
        int num,sum=0;
        for(int i=0;i<len;i++){
            x=s[i];
            istringstream ss(x);
            ss>>num;
            sum+=num;
        }
        cout<<sum<<endl;
    }
    return 0;
}
