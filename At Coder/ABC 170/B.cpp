#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,temp=1;
    cin>>a>>b;
    for(int i=0;i<=a;i++){
        for(int j=0;j<=a;j++){
            if((i*2+4*j)==b&&i+j==a){
                cout<<"Yes"<<endl;
                 temp=0;
                break;
            }

        }
    }
    if(temp)
    cout<<"No"<<endl;
    return 0;

}
