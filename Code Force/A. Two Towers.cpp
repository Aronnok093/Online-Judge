#include<bits/stdc++.h>
using namespace std;
#define ll long ling int


int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE

    int t;
    cin>>t;
    while(t--){
        int n,m,cnt =0;
        string a,b;
        cin>>n>>m;
        cin>>a>>b;

        string rev="";

        for(int i=m-1;i>=0;i--){
            rev+=b[i];
        }

        a=a+rev;

        for(int i=0;i<(m+n-1);i++){
            if(a[i]==a[i+1]) cnt++;
        }
        if(cnt<=1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }

    return 0;

}
