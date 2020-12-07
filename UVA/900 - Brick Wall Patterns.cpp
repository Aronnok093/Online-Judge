#include<bits/stdc++.h>
using namespace std;

int fibo(int x){
    if(x==0) return 1;
    else if(x==1) return 1;
    else return fibo(x-1)+fibo(x-2);
}

int main(){
    int x;
    while(1){
        cin>>x;
        if(x==0) break;
        else{
            cout<<fibo(x)<<endl;
        }
    }
    return 0;

}
