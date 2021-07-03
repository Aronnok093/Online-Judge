#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*oid res(){
    ll n,m;
    cin>>n>>m;
    ll arr[n];
    ll sum =0,ans=0,x;
    for(ll i=0;i<n;i++){
        cin>>x;
        arr[i]=x;
        sum+=x;
    }
    sort(arr,arr+n);
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n&&i<m;j++){
            sum-=arr[i]^i;
            if(sum>0)
                ans++;

        }

    }
    cout<<ans+1<<endl;

} */
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,ans,n,k;
    cin>>t;
    while(t--!=0){
        cin>>n>>k;
        vector<int>a(n);
        for(int&i: a){
            cin>>i;
            }
        vector<int>nbit(31);
        int c,t1;
        for(int j=0;j<=30;j++){
            c=0;
            for(int& i: a){
                if(i%2!=0){
                    c++;
                }
                i/=2;
            }
            nbit[j]=c;
        }
        ans=0;
        for(int j=0;j<=30;j++){
            if(nbit[j]%k==0){
                ans+=nbit[j]/k;

            }
            else{
                ans+=nbit[j]/k+1;
            }

        }
         cout<<ans<<"\n";
    }

    return 0;

}
