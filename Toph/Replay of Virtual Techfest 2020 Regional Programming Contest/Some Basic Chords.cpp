#include<bits/stdc++.h>
#define fs() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
string a_mj="x54321~~~~~~111111110001~~~~~~";
string a_mi="x54321~~~~~~111111111101~~~~~~111111110011~~~~~~";
string b_mi="xx4321~~~~~~111111111110~~~~~~111111111101~~~~~~111111110011~~~~~~";
string c_mj="x54321~~~~~~111111111101~~~~~~111111110111~~~~~~111111101111~~~~~~";
string d_mi="xx4321~~~~~~111111111110~~~~~~111111111011~~~~~~111111111101~~~~~~";
string d_mj="xx4321~~~~~~111111111010~~~~~~111111111101~~~~~~";
string e_mj="654321~~~~~~111111111011~~~~~~111111100111~~~~~~";
string e_mi="654321~~~~~~111111100111~~~~~~";
string f_mj="x54321~~~~~~111111111101~~~~~~111111111011~~~~~~111111100111~~~~~~";
string g_mj="654321~~~~~~111111101111~~~~~~111111011100~~~~~~";
int main(){
    fs()
    int t,count=0;
    cin>>t;
    while(1){
        count++;
        string s,in;
        int n;
        cin>>n;
        cin>>s;
        for(int i=0;i<n-1;i++){
            cin>>in;
            s+=in;
        }
        if(s==a_mj)
            cout<<"Case "<<count<<": "<<"A-major"<<endl;
        else if(s==a_mi)
            cout<<"Case "<<count<<": "<<"A-minor"<<endl;
        else if(s==b_mi)
            cout<<"Case "<<count<<": "<<"B-minor"<<endl;
        else if(s==c_mj)                                         //complexity O(n)
            cout<<"Case "<<count<<": "<<"C-major"<<endl;
        else if(s==d_mi)
            cout<<"Case "<<count<<": "<<"D-minor"<<endl;
        else if(s==d_mj)
            cout<<"Case "<<count<<": "<<"D-major"<<endl;
        else if(s==e_mj)
            cout<<"Case "<<count<<": "<<"E-major"<<endl;
        else if(s==e_mi)
            cout<<"Case "<<count<<": "<<"E-minor"<<endl;
        else if(s==f_mj)
            cout<<"Case "<<count<<": "<<"F-major"<<endl;
        else if(s==g_mj)
            cout<<"Case "<<count<<": "<<"G-major"<<endl;
        if(count>=t)
            break;
        s.clear();
    }
    return 0;

}
