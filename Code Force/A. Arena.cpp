#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

 int main(){
    fs()
    int t;
    cin>>t;
    while(t--){
        int tt,x;
        vector<int>arr;
        cin>>tt;
        for(int i=0;i<tt;i++){
            cin>>x;
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        cout<<tt-count(arr.begin(),arr.end(),arr[0])<<endl;
    }
    return 0;
 }
