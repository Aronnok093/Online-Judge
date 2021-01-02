#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,sumA=0,sumB=0,count=3;
    cin>>a>>b;
    while(count--){
        sumA+=a%10;
        a=a/10;
        sumB+=b%10;
        b=b/10;
    }
    if(sumA>sumB)
        cout<<sumA<<endl;
    else
        cout<<sumB<<endl;
}
