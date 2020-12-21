#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    ll t;
    cin >> t;
    while ( t-- )
    {
        ll x,y,k,n;
        cin >> x >> y >> k >> n;
        if(x < y)
            swap(x,y);
        while(true)
        {
            if(x == y-1 || x < k)
            {
                cout << "No" << endl;
                break;
            }
            if(x == y)
            {
                cout << "Yes" << endl;
                break;
            }
            x -= k;
            y += k;
        }
    }
    return 0;
}
