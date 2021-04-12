#include<bits/stdc++.h>
using namespace std;
set<int>st;
vector<int>arr;
int main(){
    int t;
    cin>>t;
    while(t--){
        int tt,x;
        cin>>tt;
        for(int i=0;i<tt;i++){
            cin>>x;
            arr.push_back(x);
            st.insert(x);
        }
        for(auto it: st){
            auto it1=count(arr.begin(),arr.end(),it);
            if(it1==1){
                auto it2 = find(arr.begin(), arr.end(),it);
                 int index = it2- arr.begin();
                cout<<index+1<<endl;
                st.clear();
                arr.clear();
                break;
            }
        }
    }
    return 0;

}
