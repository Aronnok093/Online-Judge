#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,x,index,minimum=99,diff;
    cin>>a>>b;
    if(b==0){
        cout<<a<<endl;
        exit(0);
    }
    vector<bool>arr(110,0);
    for(int i=0;i<b;i++){
        cin>>x;
        arr[x]=true;
    }
    for(int i=0;i<=110;i++){
        if(!arr[i]){
            diff=abs(a-i);
            minimum=min(minimum,diff);
        }
    }
    diff=abs(a-minimum);
    if(!arr[diff])
        cout<<diff<<endl;
    else{
        cout<<a+minimum<<endl;
    }
    return 0;
}
