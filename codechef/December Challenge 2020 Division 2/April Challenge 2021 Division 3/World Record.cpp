#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        float ans=100.00/(a*b*c*d);
        float cmp=9.575;
        if(ans<cmp)
            cout<<"YES"<<endl;
        else
            cout<<"N0"<<endl;
    }
    return 0;
}
