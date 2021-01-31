#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    fs()
   int t,ans,count=0;
   cin>>t;
   for(int i=0;i<t;i++){
        cin>>ans;
        if(ans>=80)
            count++;
   }
   cout<<count<<endl;

    return 0;
}
/*
5
80 89 79 100 55

3
*/
