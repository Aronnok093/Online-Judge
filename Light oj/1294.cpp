#include<iostream>
#include<cstdio>
#include<cmath>


using namespace std;

    int main()
    {
        int T;
        cin>>T;
        long long int n,m;

        for(int i=1;i<=T;i++)

        {
            cin>>n>>m;
            printf("Case %d: %lld\n",i,(n*m)/2);
        }

        return 0;
    }
