#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){

    int term,num;
    cin>>term;
    while(term--){
        cin>>num;
        int eq=(num*63+7492)*5-498;
        cout<<abs(eq/10%10)<<endl;
    }
    return 0;

}
