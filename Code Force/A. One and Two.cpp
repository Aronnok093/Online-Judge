#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int t;
    cin>>t;
    while(t--){
        ll tt,sz,x,a=1,k=0,flag=0,count=0;
        vector< int > arr;
        cin>>tt;
        sz=tt;
        while(tt--){

            cin>>x;
            arr.push_back(x);
            if(x==2) count++;
        }
        //cout<<"c->"<<count<<endl;
        if(count%2==0&&count!=0){
            for(ll i=0;i<sz;i++){
                if(arr[i]==2){
                    k++;
                    if(k==(count/2)) {
                        cout<<i+1<<endl;
                        break;
                    }
                }

            }
        }
        else if(!count){
            cout<<1<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }

}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE
    solve();

}
