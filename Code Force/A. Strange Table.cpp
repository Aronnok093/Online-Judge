#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main(){
      int t;
      cin>>t;
      while(t--){
        ll n,m,x,rw,cl,tmp;
        cin>>n>>m>>x;

        rw= x%n;
        if(rw==0){
            rw=n;
        }
        cl=ceil((x*1.0)/n);
        tmp=(rw-1)*m;
        if(n*m!=x)
            cout<<tmp+cl<<endl;
        else
            cout<<x<<endl;
      }

    return 0;
}
