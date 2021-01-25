#include<bits/stdc++.h>
#define fs() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;

int main(){
    fs()
    ll num;
    cin>>num;
    if(num>=70)
        cout<<"Bad weather."<<endl;                     //complexity O(1) 0.00 ms
    else if(num<=30)
        cout<<"Good weather."<<endl;
    else
        cout<<"\"Confusing weather.\""<<endl;
    return 0;
}
