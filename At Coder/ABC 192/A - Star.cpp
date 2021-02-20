#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,tmp;
    cin>>n;
    if(n%100==0)
        cout<<100<<endl;
    else{
            tmp=n%100;
            cout<<100-tmp<<endl;
    }
    return 0;

}
