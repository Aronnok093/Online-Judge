#include<bits/stdc++.h>
#define ll long long;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    	int tt,x,up=0,dwn=0,dra=0;
    	cin>>tt;
    	for(int i=0;i<tt;i++){
    		cin>>x;
    		if(x==1)
    			up++;
    		else if(x==2)
    			dwn++;
    		else if(x==3)
    			dra++;
    		
    	}
    	cout<<up+dra<<endl;
    }
    return 0;
    
}

