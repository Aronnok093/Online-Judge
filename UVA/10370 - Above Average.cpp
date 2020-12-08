#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
    int n,x,sum=0,avg;
    cin>>n;
    vector<int>arr;
    for(int i=1;i<=n;i++){
        cin>>x;
        sum+=x;
        arr.push_back(x);
    }
    avg=sum/n;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>avg)
            count++;

        }
    printf("%.3f",count*100.0/n);
    cout<<"%"<<endl;
    }
    return 0;
}
