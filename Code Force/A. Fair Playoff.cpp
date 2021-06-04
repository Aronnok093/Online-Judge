#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[4],final_a,final_b;
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
        final_a=max(arr[0],arr[1]);
        final_b=max(arr[2],arr[3]);
        sort(arr,arr+4);
        int mx,mn;
        mx=max(final_a,final_b);
        mn=min(final_a,final_b);
        if(arr[2]==mn&&arr[3]==mx)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;

}
