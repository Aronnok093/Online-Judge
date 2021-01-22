#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main(){
    fs()
    long long  n;
    cin>>n;
    cout<<n<<" "<<endl;              
    while(n!=1){                          //complexity O(n) 0.01s 
        if(n%2==0){
            n/=2;
            cout<<n<<" ";
        }
        else
        {
            n=(n*3)+1;
            cout<<n<<" ";
        }
    }
    cout<<endl;
    return 0;
}
