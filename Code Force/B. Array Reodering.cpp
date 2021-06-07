#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans=0,x;
        cin>>n;
        vector<int>arr;
         for(int i=0;i<n;i++){
            cin>>x;
           // if(x%2==0)
                //ans+=1;
           // else
                arr.push_back(x);

         }
         sort(arr.begin(),arr.end(),[](int x,int y){
            return x>y;
         });
         for(auto it:arr)
            cout<<it<<" ";
         cout<<endl;
         int len=arr.size(),gcd;
         for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                gcd=__gcd(arr[i],2*arr[j]);
                if(gcd>1)
                    ans++;
            }
         }
         cout<<ans<<endl;
    }
    return 0;
}
