#include<stdio.h>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    double a,b,n,pi,t,path,r,s,ans;
    int i,j;
    cin>>j;

    while(j--){
    cin>>r>>a>>b>>t;

    pi= acos(-1);

    a=a*t;
    b=b*t;

    path= 2*pi*r;

    while(a>path)
    a=a-path;
    while(b>path)
    b=b-path;

    if(a<b){
        n=a;
        a=b;
        b=n;
    }
    if(a-b>path/2)
        s=path-a+b;
    else
        s=a-b;
    ans= 2*r*r*(1-cos(s/r));
    ans=sqrt(ans);
    printf("%.9lf\n",ans);
    }

    return 0;
}