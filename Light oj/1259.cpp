#include<bits/stdc++.h>
using namespace std;
#define maxi 10000000
vector<int>arr;
vector<bool>arr1(maxi+2,0);

void GP(){
    arr1[0]=true;
    arr1[1]=true;
    for(int i=2;i<=maxi;i++){
        if(arr1[i]==false){
            arr.push_back(i);
        for(int j=i*2;j<=maxi;j+=i)
            arr1[j]=true;
        }
    }
}
int main(){
    int t;
    int a,b,n,count;
    cin>>t;
    GP();
    for(int i=0;i<t;i++){
        count=0;
        cin>>n;
       for (int j = 0; true; j++) {
            b=arr[j];
            a=n-b;
            if(b>a)
                break;
            if(arr1[a]==false)
                count++;
        }
        printf("Case %d: %d\n",i+1,count);
    }
    return 0;
}
