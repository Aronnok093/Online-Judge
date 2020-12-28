
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
//#define mx 221423
//#define modulo 2019
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        ll len = s.length();
        if(len%2 == 0 && s[0] != ')' && s[len - 1] != '(')
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
