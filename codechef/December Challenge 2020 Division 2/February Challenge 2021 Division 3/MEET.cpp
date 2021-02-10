#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
string ans="";
char a[20];
int print24(int HH, int MM, char str)
{
    // If time is in "AM"
    if (str == 'A')
    {
        if (HH == 12)
        {
            HH=0+MM;

        }
        else
        {
           HH=HH*100+MM;
        }
    }

    // If time is in "PM"
    else
    {
        if (HH== 12)
        {
            HH=12*100+MM;
        }
        else
        {
            HH= HH + 12;
            HH+=HH*100+MM;

        }
    }
    return HH;
}
int main(){
    int t;
    cin>>t;
    while(t--){
            int hh,mm,cmp;
            scanf("%d:%d %c%c",&hh,&mm,&a[0],&a[1]);
            cmp=print24(hh,mm,a[0]);
            int tt;
            cin>>tt;
            while(tt--){
                int HH,MM,nHH,nMM;
                char tmp1[20],tmp2[20];
                scanf("%d:%d %c%c %d:%d %c%c",&HH,&MM,&tmp1[0],&tmp1[1],&nHH,&nMM,&tmp2[0],&tmp2[1]);
            if(print24(HH,MM,tmp1[0])<=cmp&&cmp<=print24(nHH,nMM,tmp2[0]))
                ans+='1';
            else
                ans+='0';
            }
            cout<<ans<<endl;
            ans="";

        }
        return 0;
    }
