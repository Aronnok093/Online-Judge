#include<bits/stdc++.h>
using namespace std;

string rebuild(string y){
    for(int i=0;i<(int)(y.size());i++){
         if(y[i]>='A'&&y[i]<='C')y[i]='2';
        else if(y[i]>='D'&&y[i]<='F')y[i]='3';
        else if(y[i]>='G'&&y[i]<='I')y[i]='4';
        else if(y[i]>='J'&&y[i]<='L')y[i]='5';
        else if(y[i]>='M'&&y[i]<='O')y[i]='6';
        else if(y[i]>='P'&&y[i]<='S')y[i]='7';
        else if(y[i]>='T'&&y[i]<='V')y[i]='8';
        else if(y[i]>='W'&&y[i]<='Z')y[i]='9';

    }
    return y;

}
int main(){
    string s;
    while(getline(cin,s)){
        cout<<rebuild(s)<<endl;
    }
    return 0;

}
