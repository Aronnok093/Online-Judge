#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
vector<bool>arr(50,0);
//void ans(){
  //  int j=1;
  //  for(;j<=50;){
   //     j*=2;
    //    arr[j]=1;
   // }

//}
int main(){
    //fs()
   // ans();
    int t;
    cin>>t;
    while(t--){
        int tt,x,count=0;
        vector<int>arr1;
        cin>>tt;
        for(int i=0;i<tt;i++){
            cin>>x;
            arr1.push_back(x);
        }
        for(int i=0;i<tt-1;i++){
           int mx=max(arr1[i],arr1[i+1]);
           int mn=min(arr1[i],arr1[i+1]);
           double d=mx*1.0/mn;
           if(d>2){
                while((double)mx/mn>2.0){
                       mn=mn<<1;
                        count++;
                }
           }
        }
        cout<<count<<endl;
    }
    return 0;
}


