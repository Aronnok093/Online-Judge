#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        long long n,k=97,temp=0;
        string s;
        cin>>n>>k;
        for(int j=1;j<=n;j++){
            cout<<(char)('c'-temp);
            temp++;
            if(temp>2)
                temp=0;
        }
        cout<<endl;
    }
    return 0;


}
