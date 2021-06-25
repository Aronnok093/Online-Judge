#include<bits/stdc++.h>
using namespace std;
vector<int>arr(100+2,0);
void solve(){
    for(int i=1;i<=100;i++)
            arr[i]=i;
    for(int i=1;i<=100;i+=2)
        swap(arr[i],arr[i+1]);
}
int main(){
        solve();
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            if(n%2==0)
                {
                    for(int i=1;i<=n;i++)
                        cout<<arr[i]<<" ";
                    cout<<endl;
                }
                else{
                    cout<<"3 1 2 ";
            for(int j=4;j<=n;j=j+2){

                cout<<j+1<<" "<<j<<" ";
                }
                cout<<endl;
            }
        }
        return 0;
}
