#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
 
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n;
        cin>>n;
 
        unordered_map <int,int> mp,pos;
 
        int ans=-1;
        int mi=INT_MAX;
 
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pos[x]=i+1;
            mp[x]++;
        }
 
        for (auto it : mp)
        {
            if(it.second == 1 && mi>it.first)
            {
                mi=it.first;
                ans=pos[it.first];
            }
        }
        cout<<ans<<"\n";
        
    }
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}
