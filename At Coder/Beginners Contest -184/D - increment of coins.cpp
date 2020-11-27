#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
//typedef pair<ll,ll> pll;
#define first fi
#define second se;
const int N=110;
int a,b,c,d;
double f[N][N][N];
int main()
{
	cin>>a>>b>>c;
	for(int i=100;i>=a;--i)
		for(int j=100;j>=b;--j)
			for(int k=100;k>=c;--k)
			{
				int num=0;
				if(i==100) num++;
				if(j==100) num++;
				if(k==100) num++;
				if(num>1) continue;
				if(i==100 ) f[i-1][j][k]+=(f[i][j][k]+1)*(i-1)/(i+j+k-1);
				else if(j==100) f[i][j-1][k]+=(f[i][j][k]+1)*(j-1)/(i+j+k-1);
				else if(k==100) f[i][j][k-1]+=(f[i][j][k]+1)*(k-1)/(i+j+k-1);
				else
				{
					if(i>0) f[i-1][j][k]+=(f[i][j][k]+1)*(i-1)/(i+j+k-1);
					if(j>0) f[i][j-1][k]+=(f[i][j][k]+1)*(j-1)/(i+j+k-1);
					if(k>0) f[i][j][k-1]+=(f[i][j][k]+1)*(k-1)/(i+j+k-1);
				}
			}
	printf("%.8lf",f[a][b][c]);
	return 0;
}
