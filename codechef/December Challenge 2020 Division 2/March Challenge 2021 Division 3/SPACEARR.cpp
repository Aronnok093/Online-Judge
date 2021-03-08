#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        vector<int>arr;
        int n,x,flag=0,temp=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(i+1-arr[i]<0){
                flag=1;
                break;
            }
             temp=temp+(i+1-arr[i])  ;
        }
        if(flag){
            cout<<"Second"<<endl;
        }
        else{
            if(temp%2==1)
                cout<<"First"<<endl;
            else
                cout<<"Second"<<endl;
        }
    }
    return 0;

}
