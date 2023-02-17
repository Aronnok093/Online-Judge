#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll solve(ll a,ll b, ll c, ll d){
	
	ll cnt=0,flg_a=0,flg_b=0;
	
	while(1){
		if(a<=c){
			if(a<c) cnt++;
			c=c>>1;
			if(c==a) flg_a=1;
		}
		
	    if(b<=d){
			if(b<d)cnt++;
			d=d>>1;
			if(d==b) flg_b=1;
		}
		if(flg_a==1 && flg_b==1) return cnt;
		if(a>=c&&b>=d) break;
		
	}
	return -1;
}

ll single(ll a,ll c){
	ll cnt=0;
	while(1){
		if(a<=c){
			cnt++;
			c=c>>1;
			if(c==a)return cnt;
		}
		else break;
		
		
	}
	return -1;
	
}


int main(){
	
	//ll t;
	//cin>>t;
	//while(t--){
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		if(a==c&&b==d) cout<<0<<endl;
		else if(c<a||d<b) cout<<-1<<endl;
		else if((a==0&&a<c)||(b==0&&b<d))cout<<-1<<endl;
		else if(a<c&&b==d){
			if(c%a==0)cout<<single(a,c)<<endl;
			else cout<<-1<<endl;
		}
		else if(b<d&&a==c){
			if(d%b==0)cout<<single(b,d)<<endl;
			else cout<<-1<<endl;
		}
		else{
			if(c%a==0&&d%b==0)cout<<solve(a,b,c,d)<<endl;
			else cout<<-1<<endl;
		}
	//}
	return 0;
	
}
