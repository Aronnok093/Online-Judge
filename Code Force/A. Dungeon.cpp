#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int t;
    cin>>t;
    while(t--){
        long long int a,b,c,temp;
        cin>>a>>b>>c;
        long long int sum=a+b+c;
        if(sum%9==0){
            temp=sum/9;
            if(temp<=a&&temp<=b&&temp<=c)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;



}
