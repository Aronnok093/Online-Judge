#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    vector<int>risk;
    vector<int>normal;
    vector<int>::iterator ptr;
    int T,D,N,X,rDay,nDay;
    cin>>T;
    for(int i=1;i<=T;i++){

        cin>>N>>D;
        for(int j=1;j<=N;j++){
            cin>>X;
            if(X>=80||X<=9){
                risk.push_back(X);
            }
            else{
                normal.push_back(X);
            }
        }
        int sizeOne=risk.size();
        int sizeTwo=normal.size();
        if(sizeOne%D!=0){
            rDay=ceil(sizeOne/D)+1;
        }
        else{
             rDay=ceil(sizeOne/D);
        }
        if(sizeTwo%D!=0){
            nDay=ceil(sizeTwo/D)+1;
        }
        else{
            nDay=ceil(sizeTwo/D);
        }

        cout<<rDay+nDay<<endl;

        risk.clear();
        normal.clear();


    }

    return 0;


}

