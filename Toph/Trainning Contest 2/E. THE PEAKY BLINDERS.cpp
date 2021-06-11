#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<pair<int,string> >arr;
        int n;
        int x;
        string y;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>y>>x;
            arr.push_back(make_pair(x,y));
        }
        sort(arr.begin(),arr.end());
        for(int i=n-1;i>=0;i--)
            cout<<arr[i].second<<endl;
    }
    return 0;
}
