#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int x,long long int y){
    long long int temp;
    while(y!=0)
    {
        temp = y;
        y = x%y;   /// fast way to find gcd;
        x = temp;
    }
    return x;

}

int main(){

    long long int N;
    while(cin>>N&&N>0){
        long long int G=0;
        for(long long int i=1;i<N;i++)
            for(long long  int j=i+1;j<=N;j++)
        {
                G+=gcd(i,j);

        }
        cout<<G<<endl;

    }

    return 0;

}
