
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int left=0,right=1000000,mid;
    string msg;
    while(left<right){
        mid=(left+right)/2;
        cout<<mid<<endl;
        fflush(stdin);
        cin>>msg;

        if(msg=="Bigger"){
            left=mid+1;
        }
        else if(msg=="Smaller"){
            right=mid-1;
        }
        else{
            cout<<mid<<endl;
            break;
        }
    }
}

int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;

}
