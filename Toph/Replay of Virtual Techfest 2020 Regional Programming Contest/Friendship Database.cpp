#include<bits/stdc++.h>
#define ll long long
#define fs() ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
bool arr[1000][1000];
int main(){

    fs()
    int node,edge,x,y;
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        cin>>x>>y;
        if(arr[x][y]==0&&arr[y][x]==0)               ///complexity o(n) type simple graph theory
            cout<<"new"<<endl;
        else
            cout<<"old"<<endl;
        arr[x][y]=true;
        arr[y][x]=true;
    }
    return 0;

}
