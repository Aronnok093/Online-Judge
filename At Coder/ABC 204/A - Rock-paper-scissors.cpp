#include<bits/stdc++.h>
using namespace std;

int main(){
        int x,y,ans[]={0,1,2};
        cin>>x>>y;
        if(x==y){
            cout<<x<<endl;
        }
        else{
            for(int i=0;i<3;i++){
                if(ans[i]!=x&&ans[i]!=y){
                    cout<<ans[i]<<endl;
                    break;
                }
            }
        }
    return 0;
}
