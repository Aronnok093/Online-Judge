#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
int main(){
    int n,h,x;
    cin>>n>>h>>x;
    int len=n;
    while(n--){
        int x;
        cin>>x;
        arr.push_back(x);

    }
    sort(arr.begin(),arr.end());
    if((arr[len-1]+x)>=h)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
