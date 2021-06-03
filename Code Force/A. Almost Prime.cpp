#include<bits/stdc++.h>
#define mx 10000000
#define ll long long
using namespace std;
vector<ll>primeFactor(mx+2,0);
vector<ll>prime;
vector<bool>isPrime(mx+2,true);
void seive(){
    isPrime[0]=false;
    isPrime[1]=false;
    for(ll i=2;i<=mx;i++){
        if(isPrime[i]==true){
            prime.push_back(i);
            for(ll j=i*2;j<=mx;j+=i){
                isPrime[j]=false;
                primeFactor[j]+=1;
            }
        }
    }
}

int main(){
    seive();
    int t,count=0;
    cin>>t;
    for(int i=1;i<=t;i++){
        if(primeFactor[i]==2)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
