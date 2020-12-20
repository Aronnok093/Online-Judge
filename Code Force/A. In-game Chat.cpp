#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int len,count=0;
        cin>>len;
        string s;
        cin>>s;
        for(int i=len-1;i>=0;i--){
            if(s[i]==')'){
                count++;
            }
            else{
                break;
            }

        }
        if(!(len-count))
            cout<<"Yes"<<endl;
        else if((len-count)<count)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;



}
