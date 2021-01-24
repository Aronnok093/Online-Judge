#include<bits/stdc++.h>
using namespace std;
#define maxi 1000000
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
vector<int>arr;
vector<int>ans(maxi+2,0);
vector<bool>prime(maxi+2,0);
void GP(){
    prime[0]=true;
    prime[1]=true;
    for(int i=2;i<=maxi;i++){
        if(prime[i]==false){
            arr.push_back(i);
        for(int j=i*2;j<=maxi;j+=i)
            prime[j]=true;
        }
    }
}
void answer()
{
	for(int i=4;i<=1000000;i++)
	{
		int k=(!prime[i-2] && !prime[i])?1:0;                       // complexity O(n) 0.18s;
		ans[i]=ans[i-1]+k;

	}
}
int main(){
    fs()
    GP();
    answer();
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<ans[n]<<endl;
        }
    return 0;
}
