#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main(){
    fs()
    int t,count=1;
    cin>>t;
    while(t--){
        vector<int>arr(26,0);
        string s;
        int tmp;
        bool ans=true;
        char a;
        cin>>tmp>>s;
        for(int i=0;i<tmp;i++){
            if(s[i]>='a'&&s[i]<='z'){
                arr[s[i]-'a']++;
                ans=false;
            }
        }
        cout<<"Case "<<count++<<":"<<endl;
        if(ans)
            cout<< -1 <<endl<<endl;
        else{
            for(int i=0;i<26;i++){
                if(arr[i]){
                    a=i+'a';
                    cout<<a<<" - "<<arr[i]<<endl;
                }

            }
            cout<<endl;
        }

        }
        return 0;

}
/*
1
5
abcde

Case 1:
a - 1
b - 1
c - 1
d - 1
e - 1
*/

