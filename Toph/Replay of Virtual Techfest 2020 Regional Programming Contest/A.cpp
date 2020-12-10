#include<bits/stdc++.h>
using namespace std;

int main(){

    unsigned long long t,num,i;

    cin>>t;
    while(t--){
        cin>>num;
        i=1;
        do{
            if((num&(i*num))==0){
                cout<<i*num<<endl;
                break;
            }
            }while(i++);
    }
    return 0;

}
