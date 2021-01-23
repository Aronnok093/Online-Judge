#include<bits/stdc++.h>
using namespace std;
//Fixing bug like a kiss
//6:10 pm

int main(){
    string s;
    int count=1,len;
    cin>>s;
    len = s.size();
    for(int i=1;i<len;i++){                 //expected complexity O(n) 0.01s
        if(s[i]==s[i-1])
            count++;
    }
    if(count==3)
        cout<<"Won"<<endl;
    else
        cout<<"Lost"<<endl;
    return 0;
}
