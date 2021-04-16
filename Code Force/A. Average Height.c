/ Problem: A. Average Height
// Contest: Codeforces - Codeforces Round #715 (Div. 2)
// URL: https://codeforces.com/contest/1509/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)


#include<bits/stdc++.h>
using namespace std;
int main(){
	
    list <int>lst;
    int t;
    cin>>t;
    while(t--){
    	int tt,x;
        cin>>tt;
        for(int i=0;i<tt;i++){
            cin>>x;
            if(x%2!=0)
            	lst.push_front(x);
            else
                lst.push_back(x);
        }
        for(auto it: lst)
            cout<<it<<" ";
    lst.clear();
    cout<<'\n';
            
    }

    return 0;
}
