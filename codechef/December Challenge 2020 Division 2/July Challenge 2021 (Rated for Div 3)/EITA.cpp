#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int d,x,y,z;

        cin>>d>>x>>y>>z;

        int res1,res2;
        res1=7*x;
        res2=d*y+(7-d)*z;

        cout<<max(res1,res2)<<endl;
    }

    return 0;

}
