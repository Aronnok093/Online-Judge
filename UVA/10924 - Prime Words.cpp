 #include<bits/stdc++.h>
#include<string.h>
#define n 10001
using namespace std;
int main()
{
    char str[n];
    int ln;
    while(gets(str)){
        int sum=0;
        ln=strlen(str);
        for(int i=0;i<ln;i++)
        {
            if(str[i]>='a' && str[i]<='z'){
                sum+=str[i]-96;
            }
            else {
            sum+=str[i]-38;
        }
        }
        int c=0;
        for(int i=2;i<sum;i++)
        {
            if(sum%i==0) c++;
        }
        if(c==0) cout<<"It is a prime word.\n";
        else cout<<"It is not a prime word.\n";
    }
    return 0;
}
