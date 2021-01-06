#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
      vector<pair<int,int> >arr;
      int n,k,x,y;
      cin>>n>>k>>x>>y;
      if(x==y)
        cout<<n<<" "<<n<<endl;
      else{
            if(x<y){
                arr.push_back(make_pair(x+n-y,n));
                arr.push_back(make_pair(n,n-y+x));
                arr.push_back(make_pair(y-x,0));
                arr.push_back(make_pair(0,y-x));
            }
            else{
                arr.push_back(make_pair(n,y+n-x));
                arr.push_back(make_pair(y+n-x,n));
                arr.push_back(make_pair(0,x-y));
                arr.push_back(make_pair(x-y,0));
            }

      int ans=(k-1)%4;
      cout<<arr[ans].first<<" ";
      cout<<arr[ans].second<<endl;
      arr.clear();
      }

    }

}
