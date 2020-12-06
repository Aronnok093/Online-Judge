#include<bits/stdc++.h>
#define pf printf
#define sf scanf
using namespace std;
int main(){
    int py,pm,pd,by,bm,bd,cy,t;
    cin>>t;
    for(int i=1;i<=t;i++){
        sf("%d/%d/%d",&pd,&pm,&py);
        sf("%d/%d/%d",&bd,&bm,&by);
        cy=py-by;
        if(bd>pd&&bm==pm){
            cy--;
        }
        if(bm>pm){
                cy--;
        }
        if(cy<0)
            cout<<"Case #"<<i<<" Invalid birth date"<<endl;
        else if(cy>130)
            cout<<"Case #"<<i<<" Check birth date"<<endl;
        else
            cout<<"Case #"<<i<<" "<<cy<<endl;
    }

    return 0;

}
