#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
#define first fi
#define second se;
const int N=500010;
int a,b,c,d;
int main()
{
	cin>>a>>b>>c>>d;
	if(a==c&&b==d) puts("0");
	else if((abs(a-c)+abs(b-d)<=3)||(abs(a-c)==abs(b-d))) puts("1");
    else if(abs(a-c)+abs(b-d)<=6) puts("2");
	else
	{
		int x;
		if(d>=b)
		{
			if(c>=a) x=b+(c-a);
			else x=b-(c-a);
		}
		else
		{
			if(c>=a) x=b-(c-a);
			else x=b+(c-a);
		}
		if(abs(d-x)<=3) puts("2");
		else
		{
			a=a-b;c=c-d;
			if((a+c)&1) puts("3");
			else puts("2");
		}
	}
	return 0;
}
