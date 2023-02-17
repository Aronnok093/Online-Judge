#include<bits/stdc++.h>
using namespace std;

#define ll long long int


int main(){
	
	ll t,i=1;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(1&n){
			cout<<"Case "<<"#"<<i++<<": "<<"CodeFiesta "<<n/2+1<<".O"<<endl;
		}
		else cout<<"Case "<<"#"<<i++<<": "<<"CodeCombat "<<n/2<<".O"<<endl;
	}
	return 0;
	
}
