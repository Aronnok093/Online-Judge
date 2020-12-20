#include<bits/stdc++.h>
using namespace std;
int main(){

    int h,w;
    int mini=1000;
    int sum=0;
    cin>>h>>w;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            int a;
            cin>>a;
            mini=min(mini,a);
            sum+=a;
        }
    }
    cout<<sum-h*w*mini<<endl;
    return 0;

}
