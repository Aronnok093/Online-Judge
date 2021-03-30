#include<bits/stdc++.h>
#define ll long long int
using namespace std;
stack<ll>st;
void ans(){
    while(!st.empty()){
        printf("%.4lf\n",sqrt(st.top()));
        st.pop();
    }

}
int main(){
    ll num;
    while(cin>>num){
        if(num==0)
            break;
        st.push(num);
    }
    ans();
    return 0;
}
