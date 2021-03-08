#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int c;
        cin>>c;
        long long int i=1;
        long long int x=0;
        while(x<=c){
            x=pow(2,i);
            i++;
        }
        i-=2;
        long long int number_of_bits = floor(log2(c))+1;
        long long unsigned int temp=((1<<number_of_bits)-1)^c;
        temp+=pow(2,i);
        long long int temp2=pow(2,i)-1;
        cout<<temp*temp2<<endl;
    }
    return 0;
}
