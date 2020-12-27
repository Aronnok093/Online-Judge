#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        long long int n,x,temp,mini=1,maxi=1;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(mini>temp)
                mini=temp;
            if(maxi<temp)
                maxi=temp;
        }
        if(maxi-mini<x){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
