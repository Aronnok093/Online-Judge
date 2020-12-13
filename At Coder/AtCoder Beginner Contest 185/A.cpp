#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr;
    int x;
    for(int i=0;i<4;i++){
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    cout<<arr[0]<<endl;
    arr.clear();
    return 0;
}
