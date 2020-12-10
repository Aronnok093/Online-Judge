#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,l;

    while(cin>>a>>b>>c>>d>>l){
        if(a==0&&b==0&&c==0&&d==0&&l==0){
            break;
        }
        int count =0;
        for(int i=0;i<=l;i++){
            int f=a*i*i+b*i+c;
            if(f%d==0)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;

}
