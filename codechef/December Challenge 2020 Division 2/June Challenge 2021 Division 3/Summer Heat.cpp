#include<bits/stdc++.h>
using namespace std;

int main(){
    

    int t; 
    cin>>t;
    while(t--){
           int ans=0,xa,xb,Xa,Xb; 
           cin>>xa>>xb>>Xa>>Xb;
           ans+=Xa/xa;
           ans+=Xb/xb;
           cout<<ans<<endl;
    }
    return 0;
}
