#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long int x,n,sum=0;
    cin>>t;
    getchar();
    while(t--){
        cin>>x>>n;
        sum=0;
        for(int i=1;i*n<=x;i++)
            sum=sum+(i*n)%10;
         cout<<sum<<endl;
    }
    return 0;
}
