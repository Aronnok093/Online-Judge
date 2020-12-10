#include<bits/stdc++.h>
#include<cmath>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    cout<<fixed;
    cout<<setprecision(10);
    int t;
    cin>>t;
    while(t--){
        double area,r,x,ang,tri;
        cin>>r>>x;
        ang=(pi*x)/360;
        tri=r*r*tan(ang); // regular polygons area  https://ektalks.blogspot.com/2018/09/perimeter-and-area-of-regular-polygons.html
        area=(pi*r*r*x)/360; 
        cout<<(tri-area)<<endl;
    }
    return 0;
}
