#include<bits/stdc++.h>
#define fs() ios::sync_with_stdio(0); cin.tie(0);
#define ull unsigned long long
#define ll long long
using namespace std;

int readl()
{
	int x=0,fg=1;
	char ch=getchar();
	while(ch>'9'||ch<'0'){
		if(ch=='-')
			fg=-fg;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		x=(x<<1)+(x<<3)+(ch^48);
		ch=getchar();
	}
	return x*fg;
}
int main(){
	ll n;
	cin >> n;
	while(n--){
		ll t;
		cin >> t;
		if(t == 1) cout << "NO" << endl;

		else if(t % 2 != 0){
			cout << "YES" << endl;
		}

		else {
			while(t%2 == 0 && t != 1){
				t /= 2;
				if(t%2 != 0 && t != 1){
					cout << "YES" << endl;
					break;
				}
				if(t == 1){
					cout << "NO" << endl;
					break;
				}
			}
		}
	}
	return 0;
}
