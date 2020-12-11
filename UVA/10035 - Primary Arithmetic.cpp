#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,sum,carry;

    while(cin>>x>>y){
        if(x==0&&y==0)
            break;
        carry=0;
        int count=0;
        int num1=(x>=y)?x:y;
        int num2=(y<=x)?y:x;
        while(num1!=0){
            sum=num1%10+num2%10+carry;
            carry=sum/10;
            num1=num1/10;
            num2=num2/10;
            if(carry!=0)
                count++;

        }
        if(count==0)
            cout<<"No carry operation."<<endl;
        else if(count>1){
            cout<<count<<" carry operations."<<endl;
        }
        else{
            cout<<count<<" carry operation."<<endl;
        }

    }
    return 0;

}
