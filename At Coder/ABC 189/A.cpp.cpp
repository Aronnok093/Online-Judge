#include<bits/stdc++.h>
using namespace std;

const int MAX=100;
bool adj[MAX][MAX];
int flg[MAX];
int n;
bool isPossible=true;

void input()
{
     cin>>n;
     int temp;
     for(int i=1; i<=n; i++)
     {
             while(cin>>temp,temp!=0)
             {
                                     adj[i][temp]=adj[temp][i]=true;
             }
     }
}
void dfs(int i)
{
     if(isPossible==false)return ;
     if(flg[i]==-1)flg[i]=0;
     for(int j=1; j<=n; j++)
     {
             if(adj[i][j])
             {
                          if(flg[j]==-1){ flg[j]=flg[i]==0?1:0;  dfs(j); }
                          else if(flg[j]==flg[i])isPossible=false;

             }
     }

}

int main()
{
    memset(adj,0,sizeof adj);

    input();
    for(int i=1; i<=n; i++)
           flg[i]=-1;

    flg[1]=0;
    for(int i=1; i<=n; i++)
            dfs(i);

    if(isPossible==false)cout<<-1<<endl;
    else {
         for(int k=1; k<=n; k++)
             cout<<flg[k];
         cout<<endl;
           }


    return 0;
}
