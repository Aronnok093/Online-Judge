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
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int div = n/2020;
		int l = div*2020;
		int r = div*2021;
		if(n >= l && n <= r){
			cout << "YES" << endl;
		}
		else {
			cout <<"NO"<< endl;
		}
//		cout << l << ' ' << r << endl;
	}
	return 0;
}
