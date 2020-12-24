#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr;
    int x;
    for(int i=0;i<5;i++){
        cin>>x;
        arr.push_back(x);
    }
    for(int i=0;i<5;i++){
        if(arr[i]==0&&i<4)
            cout<<arr[i+1]-1<<endl;
        else if(arr[i]==0&&i==4)
           cout<<arr[i-1]+1<<endl;
    }
    return 0;

}
