#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main(){
    fs()
    int n;
    cin>>n;
    for(int i=10;i>0;i--){
        if(n%i==0){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
