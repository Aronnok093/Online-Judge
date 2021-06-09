#include<bits/stdc++.h>
using namespace std;
int bfs(int src,vector<int>arr[],int len){
    vector<bool>visited(len+2,0);
    int ans=1;
    visited[src]=true;
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        int ln=arr[x].size();
        for(int i=0;i<ln;i++){
            int y=arr[x][i];
            if(visited[y]!=true){
                visited[y]=true;
                if(y!=src)
                    ans+=1;
                q.push(y);
            }
        }
    }
    return ans;

}

int main(){
    int node,edge,x,y,ans=0;
    vector<int>arr[2000+2];
    cin>>node>>edge;

            for(int i=0;i<edge;i++){
                cin>>x>>y;
                arr[x].push_back(y);
            }
            for(int i=1;i<=node;i++){
                ans+=bfs(i,arr,node);
            }
            cout<<ans<<endl;

    return 0;
}
