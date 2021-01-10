#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
vector<int>arr1;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    for(int i=0;i<n;i++){
        cin>>x;
        arr1.push_back(x);
    }
    for(int i=0;i<n;i++){
        sum+=arr[i]*arr1[i];
    }
    if(sum==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}
