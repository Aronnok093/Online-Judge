#include<bits/stdc++.h>
using namespace std;

string cmp(string  a){
    for(int i=0;i<(int)(a.size());i++){

       if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o'|| a[i]=='u')
            a[i]='a';
    }
    return a;

}

int main(){

    int t;
    cin>>t;
    while(t--){

        string one,two;
        cin>>one;
        cin>>two;
        int len1=one.size();
        int len2=two.size();
        if(len1==len2){
            if(cmp(one)==cmp(two))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else{
             cout<<"No"<<endl;
        }
    }



    return 0;
}
