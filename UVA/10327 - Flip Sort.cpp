#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    vector<int>arr;
    while(scanf("%d",&T)==1){
        int x;
        for(int i=1;i<=T;i++){
           cin>>x;
           arr.push_back(x);
        }
        int count=0;
        for(int i=1;i<T;i++)
            for(int j=0;j<i;j++){
                if(arr[j]>arr[i])
                    count++;
        }

        cout<<"Minimum exchange operations : "<<count<<endl;
        arr.clear();

    }
    return 0;

}
