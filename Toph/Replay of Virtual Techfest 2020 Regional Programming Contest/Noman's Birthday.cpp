#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
bool ans(string s,int len){
    for(int i=1;i<len;i++){
        if(s[i]==s[i-1])
            return true;
    }
    return false;


}

int main()
{
    fs()
    int n;
    string s;
    cin>>n>>s;
    if(ans(s,n))
        cout<<"Change needed"<<endl;
    else
        cout<<"No change needed"<<endl;

    return 0;
}
