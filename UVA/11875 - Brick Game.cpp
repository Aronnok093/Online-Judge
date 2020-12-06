#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>team;
    int term,count=0;
    cin>>term;
    while(term--){
        count++;
        int N,X,len;
        cin>>N;
        for(int i=1;i<=N;i++){
            cin>>X;
            team.push_back(X);
        }
        cout<<"Case "<<count<<": "<<team[N/2]<<endl;
        team.clear();
    }
    return 0;

}
