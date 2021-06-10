#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,x,count=0;
    vector<int>ice;
    vector<int>money;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x;
        money.push_back(x);
    }
    sort(money.begin(),money.end());
    int tt;
    cin>>tt;
    for(int i=0;i<tt;i++){
        cin>>x;
        ice.push_back(x);
    }
    sort(ice.begin(),ice.end());
    if(t>tt){
        for(int i=0;i<tt;i++){
            x=ice[i];
            auto it=binary_search(money.begin(),money.end(),x);
            if(it){
                count++;
                break;
            }
        }
    }
    else{
        for(int i=0;i<t;i++){
            x=money[i];
            auto it=binary_search(ice.begin(),ice.end(),x);
            if(it){
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
