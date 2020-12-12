#include<bits/stdc++.h>
using namespace std;

vector<int>arr;
void bin( unsigned n ){
    if(n>1)
        bin(n/2);
     arr.push_back(n&1);
}

int main(){
    int n,count;
    while(cin>>n){
        if(n==0)
            break;
        bin(n);
        count=0;
        cout<<"The parity of ";
        for(int i=0;i<(int)arr.size();i++){
            cout<<arr[i];
            if(arr[i]==1) count++;
        }
    cout<<" is "<<count<<" (mod 2)."<<endl;
    arr.clear();
    }
    return 0;
}
