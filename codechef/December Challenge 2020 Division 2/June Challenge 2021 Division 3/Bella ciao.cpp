

// Problem: Bella ciao
// Contest: CodeChef - June Challenge 2021 Division 3 (Rated)
// URL: https://www.codechef.com/JUNE21C/problems/CHFHEIST
// Memory Limit: 256 MB
// Time Limit: 500 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
           long long p,q,d,D,n=0,ans=0;
            cin>>D>>d>>p>>q;
            n=D/d;
            ans+=(d*((n)*((2*p)+(n-1)*q)))/2;
            ans+=(D%d)*(p+(n*q));
            cout<<ans<<endl;
            
    }
    return 0;

}
