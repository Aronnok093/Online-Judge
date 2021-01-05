#include <bits/stdc++.h>
using namespace std;
#define ll  long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while(t--)
    {
        long long n, x;
        cin >> n >> x;
        long long arr[n], maxi = 0, min = 0;
        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            min = min + arr[i];
            if(arr[i] % x ==0)
                maxi+=arr[i]/x;
            else
                maxi+=(arr[i]/x)+1;
        }
        if(min%x==0)
            min=min/x;
        else
            min=(min/x)+1;
        cout << min << " " << maxi << endl;
    }
}
