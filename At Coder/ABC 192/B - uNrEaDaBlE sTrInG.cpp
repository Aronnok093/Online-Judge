#include<bits/stdc++.h>
using namespace std;

int main(){
    int temp=1,odd,even;
    string s;
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++){
        even=2*i;
        odd=2*i+1;
        if('A'<=s[even]&&s[even]<='Z'){
            temp=0;
            break;
        }
        if('a'<=s[odd]&&s[odd]<='z'){
            temp=0;
            break;
        }
    }
    if(temp)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}
