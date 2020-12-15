#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int arr[1000],arr1[1000];
    int t;
    cin>>t;
    while(t--){
        int sz;
        long long int x;
        cin>>sz;
        for(int i=0;i<sz;i++){
            cin>>arr[i];

        }
        int count =0,flag=0,temp=0,temp2=sz-1;
        for(int i=0;i<sz;i++){
            if(flag==0){
                arr1[count++]=arr[temp++];
                flag=1;
                continue;
            }
            else if(flag==1){
                arr1[count++]=arr[temp2--];
                flag=0;
                continue;
            }
        }
        for(int i=0;i<sz;i++){
            cout<<arr1[i]<<" ";
        }
        cout<<endl;

    }
    return 0;



}
