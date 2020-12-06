#include<bits/stdc++.h>
using namespace std;

int main(){

    int num,term=1;
    while(cin>>num&&num>0){
        int count=0,i=1;
        while(i<num){
            i<<=1;
            count++;
        }
        cout<<"Case "<<term<<": "<<count<<endl;
        term++;

    }
    return 0;

}
