#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    fs()
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b&&c==0)
        cout<<"Aoki"<<endl;
    else if(a==b&&c==1)
        cout<<"Takahashi"<<endl;              //complexity O(n) 0.08s
    else if(a>b)
        cout<<"Takahashi"<<endl;
    else
        cout<<"Aoki"<<endl;
    return 0;
}
