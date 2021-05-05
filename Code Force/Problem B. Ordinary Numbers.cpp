#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll>ans;
void gn(){
     ll arr[]={1,11,111,1111,11111,111111,1111111,11111111,111111111,1111111111};
        for(int i=0;i<=9;i++){
            for(int j=1;j<=9;j++)
                ans.push_back(arr[i]*j);
    }

}

int main(){
    int t;
    gn();
    cin>>t;
    while(t--){
        ll num,count=0;
        cin>>num;
        if(num<10)
            cout<<num<<endl;
        else{
            auto it = upper_bound(ans.begin(),ans.end(),num);
            for(int i=0;ans[i]<*it;i++){
                count++;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}
