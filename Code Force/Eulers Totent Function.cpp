#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mx 1000
void solve(){
	vector<int>l,r;
	int n,k;
	cin>>n>>k;
	while(n--){
		int a,b;
		cin>>a>>b;
		l.push_back(a);
		r.push_back(b);
		
	}
	int ln=l.size();
	
	bool L=false;
	bool R=false;
	
	for(int i=0;i<ln;i++){
		if(l[i]==k) L=true;
		if(r[i]==k) R=true;
	}
	cout<<(L&&R?"YES":"NO")<<endl;
	
	
}

int main(){
	
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
}