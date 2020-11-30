#include<bits/stdc++.h>
using namespace std;
/// Typedef
typedef long long ll;
#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)
#define mx INT_MAX
#define mod 10000007
#define PI acos(-1.0)
int main()
{
    int tc,cn,ox,oy,ax,ay,bx,by;
    double O,A,B,arc,ang;
    scanf("%d",&tc);
    for(cn=1;cn<=tc;cn++)
    {
        scanf("%d %d %d %d %d %d",&ox,&oy,&ax,&ay,&bx,&by);
        O = sqrt(((bx-ax)*(bx-ax)) + ((by-ay)*(by-ay)));
        B = sqrt(((ox-bx)*(ox-bx)) + ((oy-by)*(oy-by)));
        A = sqrt(((ox-ax)*(ox-ax)) + ((oy-ay)*(oy-ay)));
        ang = acos(((A*A)+(B*B)-(O*O)) / (2.0*A*B));  //Cosine Law
        arc = A * ang;  //s=r*angle
        printf("Case %d: %lf\n",cn,arc);
    }
    return 0;
}
