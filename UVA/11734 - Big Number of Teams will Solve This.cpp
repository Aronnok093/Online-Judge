#include<bits/stdc++.h>
using namespace std;

string merg(string x){
    string y;
    for(int i=0;i<(int)(x.size());i++){
        if(x[i]!=' ')
            y.push_back(x[i]);
    }
    return y;

}

int main(){

    int t,count=0;
    string a,b;
    cin>>t;
    getline(cin,a);
    while(t--){
        count++;
        getline(cin,a);
        getline(cin,b);
        int lenA=a.size();
        int lenB=b.size();
        if(a==b){
            cout<<"Case "<<count<<": "<<"Yes"<<endl;
        }
        else if(merg(a)==merg(b)){
             cout<<"Case "<<count<<": "<<"Output Format Error"<<endl;
        }
        else{
             cout<<"Case "<<count<<": "<<"Wrong Answer"<<endl;
        }

    }
    return 0;

}
