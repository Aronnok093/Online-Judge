#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,mx,mn;
    cin>>a>>b;
    mx=max(a,b);
    mn=min(a,b);
    if(mn+3>mx)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
