#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>arr,int n){
    int sumA=0;
    for(int i=0;i<n;i++){
            sumA+=arr[i];
        }
    return sumA;

}
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m,sumA=0,sumB=0,temp,x,count=0;
        cin>>n>>m;
        vector<int>arr1;
        vector<int>arr2;
        for(int i=0;i<n;i++){
            cin>>x;
            arr1.push_back(x);
        }
        for(int i=0;i<m;i++){
            cin>>x;
            arr2.push_back(x);
        }
        x:
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        if(sum(arr1,n)>sum(arr2,m))
            cout<<count<<'\n';
        else if(count==n)
            cout<<-1<<'\n';
        else{
            swap(arr1[0],arr2[m-1]);
            count++;
            goto x;
        }

        arr1.clear();
        arr2.clear();
    }

    return 0;


}
